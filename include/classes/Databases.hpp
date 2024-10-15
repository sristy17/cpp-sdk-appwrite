#ifndef DATABASES_HPP
#define DATABASES_HPP

#include <string>
#include "Utils.hpp"
#include "json.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

using json = nlohmann::json;

class Databases {
public:
    void setup(const std::string& apiKey, const std::string& projectId);

    // Database
    std::string list();
    std::string get(const std::string& databaseId);
    std::string create(const std::string& databaseId, const std::string& name, bool enabled);
    std::string update(const std::string& databaseId, const std::string& name, bool enabled);

    // collections
    std::string listCollection();
    std::string createCollection(const std::string& databaseId, const std::string& collectionId, const std::string& name,  bool enabled);
    std::string getCollection(const std::string& databaseId, const std::string& collectionId);
    std::string updateCollection(const std::string& databaseId,const std::string& collectionId, const std::string& name, bool enabled);
    std::string deleteCollection(const std::string& databaseId, const std::string& collectionId);
    
    //attribute
    std::string createBooleanAttribute(const std::string& databaseId, const std::string& collectionId, const std::string& attributeId, bool defaultValue, bool required);
    std::string createEmailAttribute(const std::string& databaseId, const std::string& collectionId, const std::string& attributeId, bool required, const std::string& defaultValue);
    std::string createEnumAttribute(const std::string& databaseId, const std::string& collectionId, const std::string& attributeId, bool required, const std::string& defaultValue, const std::vector<std::string>& elements );
    std::string createFloatAttribute(const std::string& databaseId, const std::string& collectionId, const std::string& attributeId, bool required, double min, double max, const std::string& defaultValue);
    std::string listAttributes(const std::string& databaseId, const std::string& collectionId);

    // docs
    std::string createDocument(const std::string& databaseId, const std::string& collectionId, const std::string& documentId, const json& data);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
