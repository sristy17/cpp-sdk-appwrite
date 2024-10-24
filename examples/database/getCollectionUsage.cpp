#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    
    Appwrite appwrite(projectId);
    Databases& databases = appwrite.getDatabases();
    
    databases.setup(apiKey, projectId);

    try {
        std::string databaseId;
        std::string databasesResponse = databases.list();
        databaseId = "database123"; 

        std::string collectionId; 
        collectionId = "test1234"; 

        std::string usageRange = "24h"; 
        std::string response = databases.getDatabaseUsage(databaseId, usageRange);
        
        std::cout << "Collection usage fetched successfully! \nResponse: " << response << std::endl;

    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
