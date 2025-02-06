#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "String123"; 
    bool required = true; 
    std::string defaultValue = "";
    std::vector<std::string> elements = {"element123"};
    int size = 255;

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().createStringAttribute(databaseId, collectionId, attributeId, required, defaultValue, elements, size);
        std::cout << "String attribute created successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
