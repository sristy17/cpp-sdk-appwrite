#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string bucketId = "bucket12322";

    Appwrite appwrite(projectId, apiKey);
    
    try {
        std::string response = appwrite.getStorage().deleteBucket(bucketId);
        std::cout << "Bucket deleted successfully!" <<std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
