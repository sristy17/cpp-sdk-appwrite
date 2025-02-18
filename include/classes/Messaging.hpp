#ifndef MESSAGING_HPP
#define MESSAGING_HPP

#include <string>
#include "Utils.hpp"
#include "exceptions/AppwriteException.hpp"
#include "enums/HttpStatus.hpp"

class Messaging {
public:
    Messaging(const std::string& projectId, const std::string& apiKey);

    std::string getTopic(const std::string& topicId);

private:
    std::string projectId;
    std::string apiKey;
};

#endif
