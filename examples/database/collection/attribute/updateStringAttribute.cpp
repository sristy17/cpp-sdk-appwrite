#include "Appwrite.hpp"
#include <iostream>
#include <vector>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "String123"; 
    bool required = true; 
    std::string defaultValue = "";
    std::vector<std::string> elements = {"element13"};
    int size = 5;
    std::string new_key = "UpdatedString123"; 

    Appwrite appwrite(projectId);
    Databases& databases = appwrite.getDatabases();
    
    databases.setup(apiKey, projectId);

    try {
        std::string response = databases.updateStringAttribute(databaseId, collectionId, attributeId, required, defaultValue, elements, size, new_key);
        std::cout << "String attribute updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
