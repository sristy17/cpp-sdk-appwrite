#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "integer123"; 
    bool required = true; 
    int min = 5;  
    int max = 100; 
    std::string defaultValue = ""; 
    std::string new_key = "UpdatedInteger123"; 

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().updateIntegerAttribute(databaseId, collectionId, attributeId, required, min, max, defaultValue, new_key);
        std::cout << "Integer attribute updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}