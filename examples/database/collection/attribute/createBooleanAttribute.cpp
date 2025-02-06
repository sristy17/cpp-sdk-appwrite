#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "testattri123"; 
    bool defaultValue = true; 
    bool required = true; 

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().createBooleanAttribute(databaseId, collectionId, attributeId, defaultValue, required);
        std::cout << "Boolean attribute created successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
