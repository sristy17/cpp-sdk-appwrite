#include "Appwrite.hpp"
#include <iostream>
#include <fstream>

int main() {
    std::string projectId = "66fbb5a100070a3a1d19"; 
    std::string apiKey = "";  
    std::string bucketId = "bucket12322"; 
    std::string fileName = "example.txt"; 
    std::string filePath = "examples/storage/files/example.txt";

    Appwrite appwrite(projectId);
    Storage& storage = appwrite.getStorage();

    storage.setup(apiKey, projectId);

    try {
        std::ifstream file(filePath, std::ios::binary);
        if (!file.is_open()) {
            std::cerr << "Failed to open file: " << filePath << std::endl;
            return 1;
        }

        std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        
        std::vector<std::string> mimeTypes = {"text/plain"};
        std::string response = storage.createFile(bucketId, fileName, fileContent, mimeTypes);
        std::cout << "File created successfully! \n\nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}

