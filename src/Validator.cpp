#include "Validator.hpp"

bool Validator::isValidEmail(const std::string& email) {
    const std::regex pattern(R"(([^@\s]+)@([^\s@]+)\.([^\s@]+))");
    return std::regex_match(email, pattern);
}

bool Validator::isValidPhone(const std::string& phone) {
    const std::regex pattern(R"(^\+\d{1,15}$)");
    return std::regex_match(phone, pattern);
}

void Validator::validateAccountParams(const std::string& email, const std::string& password, const std::string& userId) {
    if (!isValidEmail(email)) {
        throw std::invalid_argument("Invalid email format.");
    }
    if (password.length() < 8) {
        throw std::invalid_argument("Password must be at least 8 characters long.");
    }
    if (userId.empty()) {
        throw std::invalid_argument("User ID cannot be empty.");
    }
}

void Validator::validateAccountParams(const std::string& email, const std::string& password) {
    if (!isValidEmail(email)) {
        throw std::invalid_argument("Invalid email format.");
    }
    if (password.length() < 8) {
        throw std::invalid_argument("Password must be at least 8 characters long.");
    }
}
