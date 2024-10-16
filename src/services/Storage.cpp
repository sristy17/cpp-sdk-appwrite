#include <iostream>
#include "classes/Storage.hpp"
#include "Validator.hpp"
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

void Storage::setup(const std::string &apiKey, const std::string &projectId) {
    this->apiKey = apiKey;
    this->projectId = projectId;
}

std::string Storage::create(const std::string& bucketId, const std::string& name){
    Validator::validateStorageParams(bucketId, name);

    std::string url = Config::API_BASE_URL + "/storage/buckets";

    std::string payload = "{\"bucketId\": \"" + bucketId +
                          "\", \"name\": \"" + name +
                          "\"}";

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
