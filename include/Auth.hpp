#ifndef AUTH_HPP
#define AUTH_HPP

#include <string>
#include "Utils.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

class Auth {
public:
    Auth(const std::string& projectId);
    bool createAccount(const std::string& email, const std::string& password, const std::string& userId);
    
private:
    std::string projectId;
};

#endif
