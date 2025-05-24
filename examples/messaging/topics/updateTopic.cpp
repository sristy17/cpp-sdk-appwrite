#include "Appwrite.hpp"
#include <iostream>
#include <vector>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey =
        "standard_"
        "71f88968dca3bd2ccd1550c4a613ebea84b4f2cca6ac9b4faccb58bf5530e7ac2896fd"
        "c5eefbc6f8751fd2c247ecc0375292341e7c3adf6b95677b8273e4fd19a0283d93f493"
        "68c1c6643aa7df4840426b34ebbf10cba7a09d9a1e715d0d2cdd532ac560449ca8b92d"
        "61cf82bb2d23e0f34543b0c1d5de1d9425f62df2611527";

    Appwrite appwrite(projectId, apiKey);

    std::string topicId = "67b3048600077f40b8a7";
    std::string newName = "pingu_123_updated";
    std::vector<std::string> newSubscribers = {"users"};

    try {
        std::string response = appwrite.getMessaging().updateTopic(
            topicId, newName, newSubscribers);
        std::cout << "Topic updated successfully!\nResponse:\n"
                  << response << std::endl;
    } catch (const AppwriteException &ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
