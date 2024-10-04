CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LDFLAGS = -lcurl

SRC_DIR = src
INCLUDE_DIR = include
EXAMPLES_DIR = examples

SRCS = \
    $(SRC_DIR)/Appwrite.cpp \
    $(SRC_DIR)/services/Account.cpp \
    $(SRC_DIR)/services/Databases.cpp \
    $(SRC_DIR)/Utils.cpp \
    $(SRC_DIR)/Validator.cpp \

createAccount: $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp
	$(CXX) $(CXXFLAGS) -o tests/createAccount $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp $(LDFLAGS)

createSession: $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp
	$(CXX) $(CXXFLAGS) -o tests/createSession $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp $(LDFLAGS)

createDatabase: $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/createDatabase $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp $(LDFLAGS)

clean:
	rm -f tests/*
