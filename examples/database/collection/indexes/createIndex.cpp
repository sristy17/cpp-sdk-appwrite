#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";

    Appwrite appwrite(projectId);
    Databases& database = appwrite.getDatabases();

    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string key = "index_from_cpp";

    // we need to use type as "key" for arrayed attributes
    std::string type = "key";
    std::vector<std::string> attributes = {"new_enum_attribute"};
    
    database.setup(apiKey, projectId);

    try {
        std::string response = database.createIndex(
            databaseId, collectionId,key, type, attributes
        );
        std::cout << "Index created successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
