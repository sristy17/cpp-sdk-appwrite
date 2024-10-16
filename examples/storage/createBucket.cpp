#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string bucketId = "bucket123";
    std::string name = "testBucket";

    Appwrite appwrite(projectId);
    Storage& storage = appwrite.getStorage();
    
    storage.setup(apiKey, projectId);

    try {
        std::string response = storage.create(bucketId, name);
        std::cout << "Bucket created successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
