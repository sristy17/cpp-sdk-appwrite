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
};

#endif
