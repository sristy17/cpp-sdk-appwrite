#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb156001abc719b82";
    std::string email = "pooranjoy@email.com";
    std::string password = "password";
    std::string userId = "user123";

    Appwrite appwrite(projectId);
    Auth& auth = appwrite.getAuth();

    if (auth.createAccount(email, password, userId)) {
        std::cout << "Account created successfully!" << std::endl;
    } else {
        std::cout << "Failed to create account." << std::endl;
    }

    return 0;
}
