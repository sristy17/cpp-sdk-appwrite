#include <iostream>
#include "classes/Messaging.hpp"
#include "Validator.hpp"
#include <sstream>
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

Messaging::Messaging(const std::string& projectId, const std::string& apiKey)
    : projectId(projectId), apiKey(apiKey) {}

std::string Messaging::getTopic(const std::string& topicId) {
    if (topicId.empty()) {
        throw AppwriteException("Missing required parameter: 'topicId'");
    }

    std::string url = Config::API_BASE_URL + "/messaging/topics/" + topicId;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);
    
    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);
    std::cout << response;

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching health. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

