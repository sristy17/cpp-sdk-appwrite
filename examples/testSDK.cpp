#include "Appwrite.hpp"
#include <iostream>

int main() {

    Appwrite appwrite = Appwrite("project-id", "your-api-key");
    Databases db = appwrite.getDatabases();
    Storage st = appwrite.getStorage();
    std::cout << "Setup Complete. Welcome to cpp-sdk-appwrite!!!" << std::endl;

    return 0;
}
