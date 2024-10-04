#ifndef APPWRITE_HPP
#define APPWRITE_HPP

#include "classes/Account.hpp"

class Appwrite {
public:
    Appwrite(const std::string& projectId);
    Account& getAccount();
    
private:
    std::string projectId;
    Account account;
};

#endif
