#include <iostream>
#include "classes/Storage.hpp"
#include "Validator.hpp"
#include <json.hpp>
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

void Storage::setup(const std::string &apiKey, const std::string &projectId) {
    this->apiKey = apiKey;
    this->projectId = projectId;
}

std::string Storage::createBucket(const std::string& bucketId, const std::string& name,
                             const std::vector<std::string>& permissions,
                             bool fileSecurity, bool enabled,
                             int maximumFileSize, const std::vector<std::string>& allowedFileExtensions,
                             const std::string& compression, bool encryption,
                             bool antivirus){
    Validator::validateStorageParams(bucketId, name);

    std::string url = Config::API_BASE_URL + "/storage/buckets";

    json payloadJson = {
            {"bucketId", bucketId},
            {"name", name},
            {"permissions", permissions},
            {"fileSecurity", fileSecurity},
            {"enabled", enabled},
            {"maximumFileSize", maximumFileSize},
            {"allowedFileExtensions", allowedFileExtensions},
            {"compression", compression},
            {"encryption", encryption},
            {"antivirus", antivirus}
        };

    std::string payload = payloadJson.dump();
    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::postRequest(url, payload, headers, response);

    if (statusCode == HttpStatus::CREATED) {
        return response;
    }
    else {
        throw AppwriteException("Error creating storage bucket. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Storage::updateBucket(const std::string& bucketId, const std::string& name,
                             const std::vector<std::string>& permissions,
                             bool fileSecurity, bool enabled,
                             int maximumFileSize, const std::vector<std::string>& allowedFileExtensions,
                             const std::string& compression, bool encryption,
                             bool antivirus){
    Validator::validateStorageParams(bucketId, name);

    std::string url = Config::API_BASE_URL + "/storage/buckets/" + bucketId;

    json payloadJson = {
            {"name", name},
            {"permissions", permissions},
            {"fileSecurity", fileSecurity},
            {"enabled", enabled},
            {"maximumFileSize", maximumFileSize},
            {"allowedFileExtensions", allowedFileExtensions},
            {"compression", compression},
            {"encryption", encryption},
            {"antivirus", antivirus}
        };

    std::string payload = payloadJson.dump();
    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::putRequest(url, payload, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error updating storage bucket. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Storage::listBuckets() {

    std::string url = Config::API_BASE_URL + "/storage/buckets/";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching buckets. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Storage::getBucket(std::string &bucketId){

    Validator::validateStorageParams(bucketId);

    std::string url = Config::API_BASE_URL + "/storage/buckets/" + bucketId;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching bucket. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}
