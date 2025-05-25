#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string messageId = "67b30694001dc16a7eb8";

    try {
        Messaging messaging(projectId, apiKey);
        std::string response = messaging.getMessages(messageId);
        std::cout << "Message Fetched!\nResponse: " << response << std::endl;
    } catch (const AppwriteException &ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
