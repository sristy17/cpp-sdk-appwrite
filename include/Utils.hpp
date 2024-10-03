#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <vector>

class Utils {
public:
    static int postRequest(const std::string& url, const std::string& payload, const std::vector<std::string>& headers, std::string& response);
};

#endif
