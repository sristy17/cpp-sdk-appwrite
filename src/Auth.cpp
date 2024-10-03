#include "Auth.hpp"
#include "Utils.hpp"
#include <iostream>

Auth::Auth(const std::string& projectId) : projectId(projectId) {}

bool Auth::createAccount(const std::string& email, const std::string& password, const std::string& userId) {
    std::string url = "https://cloud.appwrite.io/v1/account";

    std::string payload = "{\"email\": \"" + email + "\", \"password\": \"" + password + "\", \"userId\": \"" + userId + "\"}";

    std::vector<std::string> headers = {
        "Content-Type: application/json",
        "X-Appwrite-Project: " + projectId,
        "X-Appwrite-Key: standard_75c73b5195b9f69fd02b9e8013a69aef106da6a01addf7503a99aa39a98bc042ed97e594c9a8f93460d7733c98412ac88fbc9509f8433de029fa8720e4ce4251cc57ae23a41e1ddb4c1c598fb558fa0cc621051b5b514ef37e8a312871d4e0dce9165724cdad956fad6be957921bbd2e611394a23796ddb11ac5bcc25bd8b0e7"
    };

    std::string response;
    int statusCode = Utils::postRequest(url, payload, headers, response);
    
    if (statusCode == 201) {
        return true;
    } else {

        std::cerr << "Error creating session. Status code: " << statusCode << "\n";
        std::cerr << "Response: " << response << "\n";
        return false;
    }
}
