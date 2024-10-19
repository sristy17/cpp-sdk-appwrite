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
    $(SRC_DIR)/services/Storage.cpp \
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
	listCollection \
	getCollection \
	updateCollection \
	deleteCollection \
	createBooleanAttribute \
	createEmailAttribute \
	createEnumAttribute \
	createFloatAttribute \
	listAttributes \
	updateBooleanAttribute \
	updateEmailAttribute \

# build all binaries
all: $(BINS)

# Account 
createAccount: $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp
	$(CXX) $(CXXFLAGS) -o tests/createAccount $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp $(LDFLAGS)
createSession: $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp
	$(CXX) $(CXXFLAGS) -o tests/createSession $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp $(LDFLAGS)

# Database
createDatabase: $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/database/createDatabase $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp $(LDFLAGS)
updateDatabase: $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/database/updateDatabase $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp $(LDFLAGS)
getDatabase: $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/database/getDatabase $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp $(LDFLAGS)
listDatabase: $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp
	$(CXX) $(CXXFLAGS) -o tests/database/listDatabase $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp $(LDFLAGS)


# Database - Collection
listCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/listCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/collection/listCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/listCollection.cpp $(LDFLAGS)
createCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/createCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/collection/createCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/createCollection.cpp $(LDFLAGS)
getCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/getCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/collection/getCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/getCollection.cpp $(LDFLAGS)
updateCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/updateCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/collection/updateCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/updateCollection.cpp $(LDFLAGS)
deleteCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/deleteCollection.cpp
	$(CXX) $(CXXFLAGS) -o tests/collection/deleteCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/deleteCollection.cpp $(LDFLAGS)

# Database - Document
createDocument: $(SRCS) $(EXAMPLES_DIR)/database/createDocument.cpp
	$(CXX) $(CXXFLAGS) -o tests/createDocument $(SRCS) $(EXAMPLES_DIR)/database/createDocument.cpp $(LDFLAGS)

#Collection-Attribute
listAttributes: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/listAttributes.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/listAttributes $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/listAttributes.cpp $(LDFLAGS)
createBooleanAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createBooleanAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createBooleanAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createBooleanAttribute.cpp $(LDFLAGS)
createEmailAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEmailAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createEmailAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEmailAttribute.cpp $(LDFLAGS)
createEnumAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEnumAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createEnumAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEnumAttribute.cpp $(LDFLAGS)
createFloatAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createFloatAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createFloatAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createFloatAttribute.cpp $(LDFLAGS)
createIntegerAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIntegerAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createIntegerAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIntegerAttribute.cpp $(LDFLAGS)
createIPaddressAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIPaddressAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createIPaddressAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIPaddressAttribute.cpp $(LDFLAGS)
createStringAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createStringAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/createStringAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createStringAttribute.cpp $(LDFLAGS)

updateBooleanAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateBooleanAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/updateBooleanAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateBooleanAttribute.cpp $(LDFLAGS)
updateEmailAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEmailAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/updateEmailAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEmailAttribute.cpp $(LDFLAGS)
updateEnumAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEnumAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/updateEnumAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEnumAttribute.cpp $(LDFLAGS)
updateFloatAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateFloatAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/updateFloatAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateFloatAttribute.cpp $(LDFLAGS)
updateIntegerAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIntegerAttribute.cpp
	$(CXX) $(CXXFLAGS) -o tests/attribute/updateIntegerAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIntegerAttribute.cpp $(LDFLAGS)


# Storage
createBucket: $(SRCS) $(EXAMPLES_DIR)/storage/createBucket.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/createBucket $(SRCS) $(EXAMPLES_DIR)/storage/createBucket.cpp $(LDFLAGS)
updateBucket: $(SRCS) $(EXAMPLES_DIR)/storage/updateBucket.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/updateBucket $(SRCS) $(EXAMPLES_DIR)/storage/updateBucket.cpp $(LDFLAGS)
listBuckets: $(SRCS) $(EXAMPLES_DIR)/storage/listBuckets.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/listBuckets $(SRCS) $(EXAMPLES_DIR)/storage/listBuckets.cpp $(LDFLAGS)
getBucket: $(SRCS) $(EXAMPLES_DIR)/storage/getBucket.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/getBucket $(SRCS) $(EXAMPLES_DIR)/storage/getBucket.cpp $(LDFLAGS)
deleteBucket: $(SRCS) $(EXAMPLES_DIR)/storage/deleteBucket.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/deleteBucket $(SRCS) $(EXAMPLES_DIR)/storage/deleteBucket.cpp $(LDFLAGS)

# Storage - Files
getFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/getFile.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/files/getFile $(SRCS) $(EXAMPLES_DIR)/storage/files/getFile.cpp $(LDFLAGS)
updateFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/updateFile.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/files/updateFile $(SRCS) $(EXAMPLES_DIR)/storage/files/updateFile.cpp $(LDFLAGS)
deleteFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/deleteFile.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/files/deleteFile $(SRCS) $(EXAMPLES_DIR)/storage/files/deleteFile.cpp $(LDFLAGS)
getFileDownload: $(SRCS) $(EXAMPLES_DIR)/storage/files/getFileDownload.cpp
	$(CXX) $(CXXFLAGS) -o tests/storage/files/getFileDownload $(SRCS) $(EXAMPLES_DIR)/storage/files/getFileDownload.cpp $(LDFLAGS)

clean:
	rm -f tests/*
