#include <iostream>
#include "classes/Account.hpp"
#include "Validator.hpp"
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

Account::Account(const std::string& projectId) : projectId(projectId) {}

bool Account::createAccount(const std::string& email, const std::string& password, const std::string& userId, const std::string& name = "") {
    
    Validator::validateAccountParams(email, password, userId);
    
    std::string url = Config::API_BASE_URL + "/account";
    std::string payload = "{\"email\": \"" + email + "\", \"password\": \"" + password + "\", \"userId\": \"" + userId + "\", \"name\": \"" + name + "\"}";
    std::vector<std::string> headers = Config::getHeaders(projectId);

    std::string response;

    int statusCode = Utils::postRequest(url, payload, headers, response);
    
    if (statusCode == HttpStatus::CREATED) {

        std::cout<<"Response : " << response;
        return true;
    } else {
        throw AppwriteException("Error creating account. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Account::createSession(const std::string& email, const std::string& password) {

    Validator::validateAccountParams(email, password);
    
    std::string url = Config::API_BASE_URL + "/account/sessions/email";
    std::string payload = "{\"email\": \"" + email + "\", \"password\": \"" + password + "\"}";
    std::vector<std::string> headers = Config::getHeaders(projectId);

    std::string response;

    int statusCode = Utils::postRequest(url, payload, headers, response);
    
    if (statusCode == HttpStatus::CREATED) {

        return response;

    } else {
        throw AppwriteException("Error creating session. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}