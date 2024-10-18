#include "Appwrite.hpp"
#include <iostream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19";
    std::string apiKey = "";
    std::string bucketId = "bucket12322";
    std::string fileId = "6711ea1100320ad524a6";
    std::string name = "pingu123updated";

    Appwrite appwrite(projectId);
    Storage& storage = appwrite.getStorage();
    
    storage.setup(apiKey, projectId);
    
    std::vector<std::string> permissions = {"read(\"any\")", "write(\"any\")"};
    

    try {
        std::string response = storage.updateFile(
            bucketId, 
            fileId,
            name, 
            permissions
        );
        std::cout << "Bucket updated successfully! \nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
