#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

namespace Config {
    const std::string API_BASE_URL = "https://cloud.appwrite.io/v1";
    std::vector<std::string> getHeaders(const std::string& projectId) {
        return {
            "Content-Type: application/json",
            "X-Appwrite-Project: " + projectId
        };
    }
}

#endif
