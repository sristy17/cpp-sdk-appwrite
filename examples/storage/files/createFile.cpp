#include "Appwrite.hpp"
#include <iostream>
#include <fstream>
#include <vector>

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
        std::ifstream file(filePath, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            std::cerr << "Failed to open file: " << filePath << std::endl;
            return 1;
        }

        auto fileSize = file.tellg();
        file.seekg(0, std::ios::beg);
        std::string fileContent(fileSize, '\0');
        if (!file.read(&fileContent[0], fileSize)) {
            std::cerr << "Failed to read file content." << std::endl;
            return 1;
        }

        std::vector<std::string> permissions = {"role:all"};
        std::string response = storage.createFile(bucketId, fileName, fileContent, permissions);

        std::cout << "File created successfully!\n\nResponse: " << response << std::endl;
    } catch (const AppwriteException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
