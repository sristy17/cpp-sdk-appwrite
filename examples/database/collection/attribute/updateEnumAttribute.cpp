#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "Enum123"; 
    bool required = true; 
    std::string defaultValue = "";
    std::vector<std::string> elements = {"element1234"};
    std::string new_key = "new_enum_attribute";

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().updateEnumAttribute(databaseId, collectionId, attributeId, required, defaultValue, elements, new_key);
        std::cout << "Enum attribute updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
