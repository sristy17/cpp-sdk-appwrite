#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string email = "cbeocscw@main.com";
    std::string password = "pasvsdvsefefword";
    std::string userId = "13ferf2csc421wefew52";
    std::string name = "pooranjoy cdcdscd";

    Appwrite appwrite(projectId);

    try {
        if (appwrite.getAccount().createAccount(email, password, userId, name)) {
            std::cout << "\nAccount created successfully!" << std::endl;


        }
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
