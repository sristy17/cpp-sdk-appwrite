#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include "Utils.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

class Account {
public:
    explicit Account(const std::string& projectId);

    bool createAccount(const std::string& email, const std::string& password, const std::string& userId, const std::string& name);
    std::string createSession(const std::string& email, const std::string& password);

private:
    std::string projectId;
};

#endif
