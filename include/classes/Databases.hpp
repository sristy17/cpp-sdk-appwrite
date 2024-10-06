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
    std::string create(const std::string& databaseId, const std::string& name, bool enabled);

    std::string createCollection(const std::string& databaseId, const std::string& collectionId, const std::string& name,  bool enabled);

    std::string createDocument(const std::string& databaseId, const std::string& collectionId, const std::string& documentId, const json& data);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
