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
    $(SRC_DIR)/services/Health.cpp \
    $(SRC_DIR)/Utils.cpp \
    $(SRC_DIR)/Validator.cpp \

BINS = \
    createAccount \
    createSession \
    createDatabase \
    updateDatabase \
    getDatabase \
    listDatabase \
	getDatabaseUsage \
	getCollectionUsage \
	listCollection \
    createCollection \
	getCollection \
	updateCollection \
	deleteCollection \
	createDocument \
	listDocument \
	getDocument \
	deleteDocument \
	listAttributes \
	createBooleanAttribute \
	createEmailAttribute \
	createEnumAttribute \
	createFloatAttribute \
	createIntegerAttribute \
	createIPaddressAttribute \
	createStringAttribute \
	updateBooleanAttribute \
	updateEmailAttribute \
	updateEnumAttribute \
	updateFloatAttribute \
	updateIntegerAttribute \
	updateIPaddressAttribute \
	updateStringAttribute \
	listIndexes \
	createIndex \
	deleteIndex \
	getIndex \
	createBucket \
	updateBucket \
	listBuckets \
	getBucket \
	deleteBucket \
	getFile \
	updateFile \
	deleteFile \
	getFileDownload \
	getHealth \
	getAntivirus \
	getCache \
	getDB \
	getPubSub \
	getStorage \
	getStorageLocal \
	getTime \
	getQueue \
	getCertificate \
	getQueueBuilds \
	getQueueCertificates \
	getQueueUsageWebhooks \
	getQueueUsageDump \
	getQueueFunctions \
	getQueueMails \
	getQueueMessaging \
	getQueueMigrations \

# build all binaries
all: $(BINS)

# Account 
createAccount: $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp
	$(CXX) $(CXXFLAGS) -o ./createAccount $(SRCS) $(EXAMPLES_DIR)/account/createAccount.cpp $(LDFLAGS)
createSession: $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp
	$(CXX) $(CXXFLAGS) -o ./createSession $(SRCS) $(EXAMPLES_DIR)/account/createSession.cpp $(LDFLAGS)

# Database
createDatabase: $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp
	$(CXX) $(CXXFLAGS) -o ./database/createDatabase $(SRCS) $(EXAMPLES_DIR)/database/createDatabase.cpp $(LDFLAGS)
updateDatabase: $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp
	$(CXX) $(CXXFLAGS) -o ./database/updateDatabase $(SRCS) $(EXAMPLES_DIR)/database/updateDatabase.cpp $(LDFLAGS)
getDatabase: $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp
	$(CXX) $(CXXFLAGS) -o ./database/getDatabase $(SRCS) $(EXAMPLES_DIR)/database/getDatabase.cpp $(LDFLAGS)
listDatabase: $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp
	$(CXX) $(CXXFLAGS) -o ./database/listDatabase $(SRCS) $(EXAMPLES_DIR)/database/listDatabase.cpp $(LDFLAGS)
getDatabaseUsage: $(SRCS) $(EXAMPLES_DIR)/database/getDatabaseUsage.cpp
	$(CXX) $(CXXFLAGS) -o ./database/getDatabaseUsage $(SRCS) $(EXAMPLES_DIR)/database/getDatabaseUsage.cpp $(LDFLAGS)
getCollectionUsage: $(SRCS) $(EXAMPLES_DIR)/database/getCollectionUsage.cpp
	$(CXX) $(CXXFLAGS) -o ./database/getCollectionUsage $(SRCS) $(EXAMPLES_DIR)/database/getCollectionUsage.cpp $(LDFLAGS)

# Database - Collection
listCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/listCollection.cpp
	$(CXX) $(CXXFLAGS) -o ./collection/listCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/listCollection.cpp $(LDFLAGS)
createCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/createCollection.cpp
	$(CXX) $(CXXFLAGS) -o ./collection/createCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/createCollection.cpp $(LDFLAGS)
getCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/getCollection.cpp
	$(CXX) $(CXXFLAGS) -o ./collection/getCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/getCollection.cpp $(LDFLAGS)
updateCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/updateCollection.cpp
	$(CXX) $(CXXFLAGS) -o ./collection/updateCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/updateCollection.cpp $(LDFLAGS)
deleteCollection: $(SRCS) $(EXAMPLES_DIR)/database/collection/deleteCollection.cpp
	$(CXX) $(CXXFLAGS) -o ./collection/deleteCollection $(SRCS) $(EXAMPLES_DIR)/database/collection/deleteCollection.cpp $(LDFLAGS)

# Database-Collection-Document
createDocument: $(SRCS) $(EXAMPLES_DIR)/database/collection/document/createDocument.cpp
	$(CXX) $(CXXFLAGS) -o ./document/createDocument $(SRCS) $(EXAMPLES_DIR)/database/collection/document/createDocument.cpp $(LDFLAGS)
listDocument: $(SRCS) $(EXAMPLES_DIR)/database/collection/document/listDocument.cpp
	$(CXX) $(CXXFLAGS) -o ./document/listDocument $(SRCS) $(EXAMPLES_DIR)/database/collection/document/listDocument.cpp $(LDFLAGS)
deleteDocument: $(SRCS) $(EXAMPLES_DIR)/database/collection/document/deleteDocument.cpp
	$(CXX) $(CXXFLAGS) -o ./document/deleteDocument $(SRCS) $(EXAMPLES_DIR)/database/collection/document/deleteDocument.cpp $(LDFLAGS)
getDocument: $(SRCS) $(EXAMPLES_DIR)/database/collection/document/getDocument.cpp
	$(CXX) $(CXXFLAGS) -o ./document/getDocument $(SRCS) $(EXAMPLES_DIR)/database/collection/document/getDocument.cpp $(LDFLAGS)

#Collection-Attribute
listAttributes: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/listAttributes.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/listAttributes $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/listAttributes.cpp $(LDFLAGS)
createBooleanAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createBooleanAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createBooleanAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createBooleanAttribute.cpp $(LDFLAGS)
createEmailAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEmailAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createEmailAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEmailAttribute.cpp $(LDFLAGS)
createEnumAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEnumAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createEnumAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createEnumAttribute.cpp $(LDFLAGS)
createFloatAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createFloatAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createFloatAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createFloatAttribute.cpp $(LDFLAGS)
createIntegerAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIntegerAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createIntegerAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIntegerAttribute.cpp $(LDFLAGS)
createIPaddressAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIPaddressAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createIPaddressAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createIPaddressAttribute.cpp $(LDFLAGS)
createStringAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createStringAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/createStringAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/createStringAttribute.cpp $(LDFLAGS)

updateBooleanAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateBooleanAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateBooleanAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateBooleanAttribute.cpp $(LDFLAGS)
updateEmailAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEmailAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateEmailAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEmailAttribute.cpp $(LDFLAGS)
updateEnumAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEnumAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateEnumAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateEnumAttribute.cpp $(LDFLAGS)
updateFloatAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateFloatAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateFloatAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateFloatAttribute.cpp $(LDFLAGS)
updateIntegerAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIntegerAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateIntegerAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIntegerAttribute.cpp $(LDFLAGS)
updateIPaddressAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIPaddressAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateIPaddressAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateIPaddressAttribute.cpp $(LDFLAGS)
updateStringAttribute: $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateStringAttribute.cpp
	$(CXX) $(CXXFLAGS) -o ./attribute/updateStringAttribute $(SRCS) $(EXAMPLES_DIR)/database/collection/attribute/updateStringAttribute.cpp $(LDFLAGS)

# Collection-Indexes
listIndexes: $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/listIndexes.cpp
	$(CXX) $(CXXFLAGS) -o ./indexes/listIndexes $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/listIndexes.cpp $(LDFLAGS)
createIndex: $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/createIndex.cpp
	$(CXX) $(CXXFLAGS) -o ./indexes/createIndex $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/createIndex.cpp $(LDFLAGS)
deleteIndex: $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/deleteIndex.cpp
	$(CXX) $(CXXFLAGS) -o ./indexes/deleteIndex $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/deleteIndex.cpp $(LDFLAGS)
getIndex: $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/getIndex.cpp
	$(CXX) $(CXXFLAGS) -o ./indexes/getIndex $(SRCS) $(EXAMPLES_DIR)/database/collection/indexes/getIndex.cpp $(LDFLAGS)

# Storage
createBucket: $(SRCS) $(EXAMPLES_DIR)/storage/createBucket.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/createBucket $(SRCS) $(EXAMPLES_DIR)/storage/createBucket.cpp $(LDFLAGS)
updateBucket: $(SRCS) $(EXAMPLES_DIR)/storage/updateBucket.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/updateBucket $(SRCS) $(EXAMPLES_DIR)/storage/updateBucket.cpp $(LDFLAGS)
listBuckets: $(SRCS) $(EXAMPLES_DIR)/storage/listBuckets.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/listBuckets $(SRCS) $(EXAMPLES_DIR)/storage/listBuckets.cpp $(LDFLAGS)
getBucket: $(SRCS) $(EXAMPLES_DIR)/storage/getBucket.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/getBucket $(SRCS) $(EXAMPLES_DIR)/storage/getBucket.cpp $(LDFLAGS)
deleteBucket: $(SRCS) $(EXAMPLES_DIR)/storage/deleteBucket.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/deleteBucket $(SRCS) $(EXAMPLES_DIR)/storage/deleteBucket.cpp $(LDFLAGS)

# Storage - Files
getFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/getFile.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/files/getFile $(SRCS) $(EXAMPLES_DIR)/storage/files/getFile.cpp $(LDFLAGS)
updateFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/updateFile.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/files/updateFile $(SRCS) $(EXAMPLES_DIR)/storage/files/updateFile.cpp $(LDFLAGS)
deleteFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/deleteFile.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/files/deleteFile $(SRCS) $(EXAMPLES_DIR)/storage/files/deleteFile.cpp $(LDFLAGS)
getFileDownload: $(SRCS) $(EXAMPLES_DIR)/storage/files/getFileDownload.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/files/getFileDownload $(SRCS) $(EXAMPLES_DIR)/storage/files/getFileDownload.cpp $(LDFLAGS)
createFile: $(SRCS) $(EXAMPLES_DIR)/storage/files/createFile.cpp
	$(CXX) $(CXXFLAGS) -o ./storage/files/createFile $(SRCS) $(EXAMPLES_DIR)/storage/files/createFile.cpp $(LDFLAGS)


# Health
getHealth: $(SRCS) $(EXAMPLES_DIR)/health/getHealth.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getHealth $(SRCS) $(EXAMPLES_DIR)/health/getHealth.cpp $(LDFLAGS)
getAntivirus: $(SRCS) $(EXAMPLES_DIR)/health/getAntivirus.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getAntivirus $(SRCS) $(EXAMPLES_DIR)/health/getAntivirus.cpp $(LDFLAGS)
getCache: $(SRCS) $(EXAMPLES_DIR)/health/getCache.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getCache $(SRCS) $(EXAMPLES_DIR)/health/getCache.cpp $(LDFLAGS)
getDB: $(SRCS) $(EXAMPLES_DIR)/health/getDB.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getDB $(SRCS) $(EXAMPLES_DIR)/health/getDB.cpp $(LDFLAGS)
getPubSub: $(SRCS) $(EXAMPLES_DIR)/health/getPubSub.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getPubSub $(SRCS) $(EXAMPLES_DIR)/health/getPubSub.cpp $(LDFLAGS)
getStorage: $(SRCS) $(EXAMPLES_DIR)/health/getStorage.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getStorage $(SRCS) $(EXAMPLES_DIR)/health/getStorage.cpp $(LDFLAGS)
getStorageLocal: $(SRCS) $(EXAMPLES_DIR)/health/getStorageLocal.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getStorageLocal $(SRCS) $(EXAMPLES_DIR)/health/getStorageLocal.cpp $(LDFLAGS)
getTime: $(SRCS) $(EXAMPLES_DIR)/health/getTime.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getTime $(SRCS) $(EXAMPLES_DIR)/health/getTime.cpp $(LDFLAGS)
getQueue: $(SRCS) $(EXAMPLES_DIR)/health/getQueue.cpp
	$(CXX) $(CXXFLAGS) -o ./health/getQueue $(SRCS) $(EXAMPLES_DIR)/health/getQueue.cpp $(LDFLAGS)
getCertificate: $(SRCS) $(EXAMPLES_DIR)/health/params/getCertificate.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getCertificate $(SRCS) $(EXAMPLES_DIR)/health/params/getCertificate.cpp $(LDFLAGS)
getQueueBuilds: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueBuilds.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueBuilds $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueBuilds.cpp $(LDFLAGS)
getQueueCertificates: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueCertificates.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueCertificates $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueCertificates.cpp $(LDFLAGS)
getQueueUsageWebhooks: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueUsageWebhooks.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueUsageWebhooks $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueUsageWebhooks.cpp $(LDFLAGS)
getQueueUsageDump: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueUsageDump.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueUsageDump $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueUsageDump.cpp $(LDFLAGS)
getQueueFunctions: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueFunctions.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueFunctions $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueFunctions.cpp $(LDFLAGS)
getQueueMails: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMails.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueMails $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMails.cpp $(LDFLAGS)
getQueueMessaging: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMessaging.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueMessaging $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMessaging.cpp $(LDFLAGS)
getQueueMigrations: $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMigrations.cpp
	$(CXX) $(CXXFLAGS) -o ./health/params/getQueueMigrations $(SRCS) $(EXAMPLES_DIR)/health/params/getQueueMigrations.cpp $(LDFLAGS)
full_flow_test: $(SRCS) $(EXAMPLES_DIR)/full_flow_test.cpp
	$(CXX) $(CXXFLAGS) -o ./full_flow_test $(SRCS) $(EXAMPLES_DIR)/full_flow_test.cpp $(LDFLAGS)