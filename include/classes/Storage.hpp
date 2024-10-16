#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>
#include "Utils.hpp"
#include "json.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

using json = nlohmann::json;

class Storage
{
public:
    void setup(const std::string &apiKey, const std::string &projectId);
    std::string listBuckets();
    std::string create(const std::string &bucketId, const std::string &name, const std::vector<std::string> &permissions = {}, bool fileSecurity = false, bool enabled = true, int maximumFileSize = 0, const std::vector<std::string> &allowedFileExtensions = {}, const std::string &compression = "none", bool encryption = false, bool antivirus = false);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
