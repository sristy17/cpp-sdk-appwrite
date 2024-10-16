#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "Float123"; 
    bool required = true; 
    double min = 5.0;  
    double max = 100.0; 
    std::string defaultValue = "";
    std::string new_key = "UpdatedFloat123"; 

    Appwrite appwrite(projectId);
    Databases& databases = appwrite.getDatabases();
    
    databases.setup(apiKey, projectId);

    try {
        std::string response = databases.updateFloatAttribute(databaseId, collectionId, attributeId, required, min, max, defaultValue, new_key);
        std::cout << "Float attribute updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
