#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    Appwrite appwrite(projectId, apiKey);

    std::string topicId = "67b3048600077f40b8a7";
    
    try {
        std::string response = appwrite.getMessaging().getTopic(topicId);
        std::cout << "Topic Fetched! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
