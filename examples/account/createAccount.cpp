#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string email = "cbeow@main.com";
    std::string password = "pasvsdvsefefword";
    std::string userId = "13ferf2421wefew52";
    std::string name = "pooranjoy bhattacharya";

    Appwrite appwrite(projectId);
    Account& auth = appwrite.getAccount();

    try {
        if (auth.createAccount(email, password, userId, name)) {
            std::cout << "\nAccount created successfully!" << std::endl;


        }
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
