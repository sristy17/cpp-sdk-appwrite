CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LDFLAGS = -lcurl

SRC_DIR = src
INCLUDE_DIR = include
EXAMPLES_DIR = examples

example: $(SRC_DIR)/Appwrite.cpp $(SRC_DIR)/services/Auth.cpp $(SRC_DIR)/Utils.cpp $(SRC_DIR)/models/Account.cpp $(EXAMPLES_DIR)/example_auth.cpp
	$(CXX) $(CXXFLAGS) -o auth_example $(SRC_DIR)/Appwrite.cpp $(SRC_DIR)/services/Auth.cpp $(SRC_DIR)/Utils.cpp $(SRC_DIR)/models/Account.cpp $(EXAMPLES_DIR)/example_auth.cpp $(LDFLAGS)

clean:
	rm -f auth_example
