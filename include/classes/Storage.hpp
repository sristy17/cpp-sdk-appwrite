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

    //core
    std::string listBuckets();
    std::string getBucket(std::string &bucketId);
    std::string createBucket(const std::string &bucketId, const std::string &name, const std::vector<std::string> &permissions = {}, bool fileSecurity = false, bool enabled = true, int maximumFileSize = 0, const std::vector<std::string> &allowedFileExtensions = {}, const std::string &compression = "none", bool encryption = false, bool antivirus = false);
    std::string updateBucket(const std::string &bucketId, const std::string &name, const std::vector<std::string> &permissions = {}, bool fileSecurity = false, bool enabled = true, int maximumFileSize = 0, const std::vector<std::string> &allowedFileExtensions = {}, const std::string &compression = "none", bool encryption = false, bool antivirus = false);
    std::string deleteBucket(std::string &bucketId);

    //files
    std::string getFile(const std::string &bucketId, const std::string &fileId);
    std::string updateFile(const std::string &bucketId, const std::string &fileId, const std::string &name = "", const std::vector<std::string> &permissions = {});
    std::string deleteFile(const std::string &bucketId, const std::string &fileId);
    std::string getFileDownload(const std::string &bucketId, const std::string &fileId);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
