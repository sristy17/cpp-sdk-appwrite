#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
public:
    Account(const std::string& id, const std::string& email, const std::string& password);
    Account(const std::string& id, const std::string& email, const std::string& password, const std::string& name = "");

private:
    std::string id;
    std::string email;
    std::string password;
    std::string name;
};

#endif
