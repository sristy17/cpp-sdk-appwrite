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

BINS = \
    createAccount \
    createSession \
    createDatabase \
    updateDatabase \
    getDatabase \
    listDatabase \
    createCollection \
    createDocument \

# build all binaries
all: $(BINS)

# Account 
createAccount: $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp
	$(CXX) $(CXXFLAGS) -o tests/createAccount $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp $(LDFLAGS)

createSession: $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp
	$(CXX) $(CXXFLAGS) -o tests/createSession $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp $(LDFLAGS)

# Database
createDatabase: $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/createDatabase $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp $(LDFLAGS)

updateDatabase: $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/updateDatabase $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp $(LDFLAGS)

getDatabase: $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/getDatabase $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp $(LDFLAGS)

listDatabase: $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/listDatabase $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp $(LDFLAGS)


# Database - Collection

listCollection: $(SRCS) $(EXAMPLES_DIR)/database/listCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/listCollection $(SRCS) $(EXAMPLES_DIR)/database/listCollection.cpp $(LDFLAGS)

createCollection: $(SRCS) $(EXAMPLES_DIR)/database/createCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/createCollection $(SRCS) $(EXAMPLES_DIR)/database/createCollection.cpp $(LDFLAGS)

getCollection: $(SRCS) $(EXAMPLES_DIR)/database/getCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/getCollection $(SRCS) $(EXAMPLES_DIR)/database/getCollection.cpp $(LDFLAGS)

updateCollection: $(SRCS) $(EXAMPLES_DIR)/database/updateCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/updateCollection $(SRCS) $(EXAMPLES_DIR)/database/updateCollection.cpp $(LDFLAGS)

# Database - Document
createDocument: $(SRCS) $(EXAMPLES_DIR)/database/createDocument.cpp
	$(CXX) $(CXXFLAGS) -o tests/createDocument $(SRCS) $(EXAMPLES_DIR)/database/createDocument.cpp $(LDFLAGS)

clean:
	rm -f tests/*
