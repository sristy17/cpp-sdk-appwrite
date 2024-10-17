#ifndef VALIDATOR_HPP
#define VALIDATOR_HPP

#include <string>
#include <regex>
#include <stdexcept>

class Validator {
public:
    static bool isValidEmail(const std::string& email);
    static bool isValidPhone(const std::string& phone);
    static void validateAccountParams(const std::string& email, const std::string& password, const std::string& userId);
    static void validateAccountParams(const std::string& email, const std::string& password);
    static void validateDatabaseParams(const std::string& databaseId, const std::string& name);
    static void validateStorageParams(const std::string& bucketId, const std::string& name);
    static void validateStorageParams(const std::string& bucketId);
};

#endif
