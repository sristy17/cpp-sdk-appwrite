#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = ""; 
    std::string databaseId = "database123";
    std::string collectionId = "test1234";
    std::string attributeId = "IPA123"; 
    bool required = true;  
    std::string new_key = "UpdatedIPaddress123"; 
    std::string defaultValue = ""; 

    Appwrite appwrite(projectId, apiKey);

    try {
        std::string response = appwrite.getDatabases().updateIPaddressAttribute(databaseId, collectionId, attributeId, required, defaultValue, new_key);
        std::cout << "IP Address attribute updated successfully!\nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Appwrite exception: " << ex.what() << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Standard exception: " << ex.what() << std::endl;
    }

    return 0;
}
