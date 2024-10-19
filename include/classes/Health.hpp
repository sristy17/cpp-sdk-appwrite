#ifndef HEALTH_HPP
#define HEALTH_HPP

#include <string>
#include "Utils.hpp"
#include "json.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

using json = nlohmann::json;

class Health {
public:
    void setup(const std::string& apiKey, const std::string& projectId);

    // core
    std::string getHealth();
    std::string getAntivirus();
    std::string getCache();
    std::string getDB();
    std::string getPubSub();
    
private:
    std::string apiKey;
    std::string projectId;
};

#endif
