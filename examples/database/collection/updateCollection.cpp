#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string databaseId = "database123";
    std::string collectionId = "collectioasdgfdsn123";
    std::string name = "schanged_collection_name_112";
    bool enabled = true;

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().updateCollection(databaseId, collectionId, name, enabled);
        std::cout << "collection updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
