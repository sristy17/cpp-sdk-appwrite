## Class: Storage
Works around with Storage Buckets and files in Appwrite

### Core

| Method Name | Usage                                                                                          | Link                                                   |
|-------------|------------------------------------------------------------------------------------------------|--------------------------------------------------------|
| `createBucket()`  | Creates a new Storage Bucket in the Appwrite project.   | [Example](/examples/storage/createBucket.cpp) |
| `getBucket()`  | Fetches the bucket from the Appwrite project using the unique bucket ID.                    | [Example](/examples/storage/getBucket.cpp) |
| `listBuckets()`    | Retrieves a list of all buckets in the Appwrite project.                                   | [Example](/examples/storage/listBuckets.cpp)  |
| `updateBucket()`    | Updates the Bucket in the Appwrite project with specific bucket ID.                                   | [Example](/examples/storage/updateBucket.cpp)  |
| `deleteBucket()`    | Deletes the Bucket in the Appwrite project with specific bucket ID.                                   | [Example](/examples/storage/deleteBucket.cpp)  |

### Files

| Method Name | Usage                                                                                          | Link                                                   |
|-------------|------------------------------------------------------------------------------------------------|--------------------------------------------------------|
| `createFile()`  | Creates a new File in the Bucket in the Appwrite project.   | [Example](/examples/storage/files/createFile.cpp) |
| `getFile()`  | Fetches the file from the bucket in the Appwrite project using the unique bucket ID.                    | [Example](/examples/storage/files/getFile.cpp) |
| `getFileView()`  | Fetches the file from the bucket in the Appwrite project using the unique bucket ID.                    | [Example](/examples/storage/files/getFileView.cpp) |
| `getFileDownload()`    | Retrieves a file buffer for download from the buckets in the Appwrite project.                                   | [Example](/examples/storage/files/getFileDownload.cpp)  |
| `updateFile()`    | Updates the file in the bucket of Appwrite project with specific bucket ID.                                   | [Example](/examples/storage/files/updateFile.cpp)  |
| `deleteFile()`    | deletes the file in the bucket of Appwrite project with specific bucket ID.                                   | [Example](/examples/storage/files/deleteFile.cpp)  |