#include <iostream>
#include "Auth.hpp"
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

Auth::Auth(const std::string& projectId) : projectId(projectId) {}

bool Auth::createAccount(const std::string& email, const std::string& password, const std::string& userId) {
    std::string url = Config::API_BASE_URL + "/account";
    std::string payload = "{\"email\": \"" + email + "\", \"password\": \"" + password + "\", \"userId\": \"" + userId + "\"}";
    std::vector<std::string> headers = {
        "Content-Type: application/json",
        "X-Appwrite-Project: " + projectId
    };

    std::string response;
    int statusCode = Utils::postRequest(url, payload, headers, response);
    
    if (statusCode == HttpStatus::CREATED) {
        return true;
    } else {
        throw AppwriteException("Error creating account. Status code: " + std::to_string(statusCode) + "\nResponse: " + response);
    }
}
