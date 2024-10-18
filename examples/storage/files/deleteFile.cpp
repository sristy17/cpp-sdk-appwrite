#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string fileId = "6711ee630008e3491a68";
    std::string bucketId = "bucket12322";

    Appwrite appwrite(projectId);
    Storage& storage = appwrite.getStorage();
    
    storage.setup(apiKey, projectId);

    try {
        std::string response = storage.deleteFile(bucketId, fileId);
        std::cout << "File deleted successfully! \n " << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
