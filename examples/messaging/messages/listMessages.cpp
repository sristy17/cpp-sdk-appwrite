#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    Appwrite appwrite(projectId, apiKey);

    Queries queries;
    queries.queryLimit(50);

    try {
        std::string response = appwrite.getMessaging().listMessages(queries);
        std::cout << "Messages fetched! \nResponse: " << response << std::endl;
    } catch (const AppwriteException &ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
