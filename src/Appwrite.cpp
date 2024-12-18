#include "Appwrite.hpp"

Appwrite::Appwrite(const std::string& projectId) : account() , databases() {
    account.setup(projectId);
}

Account& Appwrite::getAccount() {
    return account;
}

Databases& Appwrite::getDatabases() {
    return databases;
}

Storage& Appwrite::getStorage() {
    return storage;
}

Health& Appwrite::getHealth() {
    return health;
}