#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "new_boolean_attribute"; 
    std::string new_key = "new_boolean_attribute123"; 
    bool defaultValue = false; 
    bool required = false; 

    Appwrite appwrite(projectId);
    Databases& databases = appwrite.getDatabases();
    
    databases.setup(apiKey, projectId);

    try {
        std::string response = databases.updateBooleanAttribute(databaseId, collectionId, attributeId, defaultValue, required, new_key);
        std::cout << "Boolean attribute updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
