#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>
#include "Utils.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

class Storage {
public:
    void setup(const std::string& apiKey, const std::string& projectId);
    std::string listBuckets();
    std::string create(const std::string& bucketId, const std::string& name);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
