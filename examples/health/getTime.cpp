#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    Appwrite appwrite(projectId);
  
    try {
        std::string response = appwrite.getHealth().getTime();
        std::cout << "Health Check Done! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
