#include <iostream>
#include "classes/Account.hpp"
#include "Validator.hpp"
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

void Account::setup(const std::string& projectId) {
    this->projectId = projectId;
}

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
        throw AppwriteException("Error creating account. Status code: " + std::to_string(statusCode) + "\nResponse: " + response);
    }
}
