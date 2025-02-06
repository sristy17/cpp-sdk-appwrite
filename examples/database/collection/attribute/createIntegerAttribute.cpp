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

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().createIntegerAttribute(databaseId, collectionId, attributeId, required, min, max, defaultValue);
        std::cout << "Integer attribute created successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
