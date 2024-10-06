#include "Appwrite.hpp"
#include <json.hpp>
#include <iostream>

int main()
{
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string databaseId = "database123";
    std::string collectionId = "collectioasdgfdsn123";
    std::string documentId = "documesdgasgnt123";
    json data = {
        {"name", "Pooranjoy"},
        {"email", "pooranjoyb@example.com"},
        {"age", 22}
        };

    Appwrite appwrite(projectId);
    Databases &databases = appwrite.getDatabases();

    databases.setup(apiKey, projectId);

    try
    {
        std::string response = databases.createDocument(databaseId, collectionId, documentId, data);
        std::cout << "Document created successfully! \nResponse: " << response << std::endl;
    }
    catch (const AppwriteException &ex)
    {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
