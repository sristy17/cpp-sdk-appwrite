#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
public:
    Account(const std::string& id, const std::string& email, const std::string& password);

private:
    std::string id;
    std::string email;
    std::string password;
};

#endif
