#include "Appwrite.hpp"

Appwrite::Appwrite(const std::string& projectId) : projectId(projectId), auth(projectId) {}

Auth& Appwrite::getAuth() {
    return auth;
}
