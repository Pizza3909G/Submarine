/**
* @file InternetAddress.h
*/
#pragma once
#include <string>
#include <stdexcept>

class InternetAddress {
    public:
    std::string ip;
    int port, version;
    InternetAddress(std::string address, int port, int version);
    std::string getIp();
    int getPort();
    int getVersion();
    std::string toString();
    bool equals(InternetAddress *address);
};