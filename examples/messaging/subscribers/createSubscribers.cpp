#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";

    Appwrite appwrite(projectId, apiKey);

    std::string topicId = "test_123";
    std::string name = "pingu_123";
    std::string targetId = "671e67e6e1c333c7df43";
    std::string subscriberId = "subscriber_123";
    ;

    try {
        std::string response = appwrite.getMessaging().createSubscribers(
            topicId, name, targetId, subscriberId);
        std::cout << "Subscriber Created! \nResponse: " << response
                  << std::endl;
    } catch (const AppwriteException &ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}