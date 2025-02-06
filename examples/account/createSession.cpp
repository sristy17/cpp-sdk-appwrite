#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string email = "cbeow@main.com";
    std::string password = "pasvsdvsefefword";

    Appwrite appwrite(projectId);

    try {
        std::string response = appwrite.getAccount().createSession(email, password);
        std::cout << "\nSession created." << std::endl;
        std::cout<< "\nResponse  : " << response;

    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
