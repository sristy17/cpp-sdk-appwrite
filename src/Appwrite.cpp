#include "Appwrite.hpp"

Appwrite::Appwrite(const std::string& projectId) : account() {
    account.setup(projectId);
}

Account& Appwrite::getAccount() {
    return account;
}