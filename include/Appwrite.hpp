#ifndef APPWRITE_HPP
#define APPWRITE_HPP

#include "Auth.hpp"

class Appwrite {
public:
    Appwrite(const std::string& projectId);
    Auth& getAuth();
    
private:
    std::string projectId;
    Auth auth;
};

#endif
