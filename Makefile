# Makefile to compile the Appwrite C++ SDK
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LDFLAGS = -lcurl

# Directories
SRC_DIR = src
INCLUDE_DIR = include
EXAMPLES_DIR = examples

# Target for the example file
example: $(SRC_DIR)/Appwrite.cpp $(SRC_DIR)/Auth.cpp $(SRC_DIR)/Utils.cpp $(EXAMPLES_DIR)/auth_example.cpp
	$(CXX) $(CXXFLAGS) -o auth_example $(SRC_DIR)/Appwrite.cpp $(SRC_DIR)/Auth.cpp $(SRC_DIR)/Utils.cpp $(EXAMPLES_DIR)/auth_example.cpp $(LDFLAGS)

# Clean up generated files
clean:
	rm -f auth_example
