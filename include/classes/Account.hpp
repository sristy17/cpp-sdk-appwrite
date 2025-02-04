#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include "Utils.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

class Account {
public:
    Account(const std::string& projectId, const std::string& apiKey);

    bool createAccount(const std::string& email, const std::string& password, const std::string& userId, const std::string& name);
    std::string createSession(const std::string& email, const std::string& password);

private:
    std::string apiKey;
    std::string projectId;
};

#endif
