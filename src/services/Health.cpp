#include <iostream>
#include "classes/Health.hpp"
#include "Validator.hpp"
#include <json.hpp>
#include "Utils.hpp"
#include "config/Config.hpp"
#include "enums/HttpStatus.hpp"
#include "exceptions/AppwriteException.hpp"

void Health::setup(const std::string &apiKey, const std::string &projectId) {
    this->apiKey = apiKey;
    this->projectId = projectId;
}

std::string Health::getHealth(){

    std::string url = Config::API_BASE_URL + "/health";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching health. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getAntivirus(){
    std::string url = Config::API_BASE_URL + "/health/anti-virus";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching anti-virus. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getCache(){
    std::string url = Config::API_BASE_URL + "/health/cache";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching cache. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getDB(){
    std::string url = Config::API_BASE_URL + "/health/db";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching DB. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getPubSub(){
    std::string url = Config::API_BASE_URL + "/health/pubsub";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching pubsub. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getStorage(){
    std::string url = Config::API_BASE_URL + "/health/storage";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching storage. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getStorageLocal(){
    std::string url = Config::API_BASE_URL + "/health/storage/local";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching storage - local. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getTime(){
    std::string url = Config::API_BASE_URL + "/health/time";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getQueue(){
    std::string url = Config::API_BASE_URL + "/health/queue";

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getCertificate(const std::string& domain){
    std::string url = Config::API_BASE_URL + "/health/certificate";

    std::string queryString = "domain=" + Utils::urlEncode(domain);
    url += "?" + queryString;
    
    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getQueueBuilds(const std::string& threshold){
    std::string url = Config::API_BASE_URL + "/health/queue/builds";

    std::string queryString = "threshold=" + Utils::urlEncode(threshold);
    url += "?" + queryString;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getQueueCertificates(const std::string& threshold){
    std::string url = Config::API_BASE_URL + "/health/queue/certificates";

    std::string queryString = "threshold=" + Utils::urlEncode(threshold);
    url += "?" + queryString;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getQueueUsageWebhooks(const std::string& threshold){
    std::string url = Config::API_BASE_URL + "/health/queue/webhooks";

    std::string queryString = "threshold=" + Utils::urlEncode(threshold);
    url += "?" + queryString;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

std::string Health::getQueueUsageDump(const std::string& threshold){
    std::string url = Config::API_BASE_URL + "/health/queue/usage-dump";

    std::string queryString = "threshold=" + Utils::urlEncode(threshold);
    url += "?" + queryString;

    std::vector<std::string> headers = Config::getHeaders(projectId);
    headers.push_back("X-Appwrite-Key: " + apiKey);

    std::string response;

    int statusCode = Utils::getRequest(url, headers, response);

    if (statusCode == HttpStatus::OK) {
        return response;
    }
    else {
        throw AppwriteException("Error fetching time. Status code: " + std::to_string(statusCode) + "\n\nResponse: " + response);
    }
}

