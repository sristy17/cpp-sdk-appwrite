#include <iostream>
#include "classes/Health.hpp"
#include "Validator.hpp"
#include <json.hpp>
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

void Health::setup(const std::string &apiKey, const std::string &projectId) {
    this->apiKey = apiKey;
    this->projectId = projectId;
}

std::string Health::getHealth(){

    std::string url = Config::API_BASE_URL + "/health";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching health. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getAntivirus(){
    std::string url = Config::API_BASE_URL + "/health/anti-virus";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching anti-virus. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getCache(){
    std::string url = Config::API_BASE_URL + "/health/cache";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching cache. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getDB(){
    std::string url = Config::API_BASE_URL + "/health/db";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching DB. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getPubSub(){
    std::string url = Config::API_BASE_URL + "/health/pubsub";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching pubsub. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}
