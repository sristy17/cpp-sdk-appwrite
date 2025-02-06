#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    
    Appwrite appwrite(projectId, apiKey);

    try {
        std::string databaseId = "database123"; 
        std::string usageRange = "24h"; 
        std::string response = appwrite.getDatabases().getDatabaseUsage(databaseId, usageRange);
        
        std::cout << "Database usage fetched successfully! \nResponse: " << response << std::endl;

    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
