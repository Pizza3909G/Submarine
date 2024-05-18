#include "raklib/utils/InternetAddress.h";

InternetAddress::InternetAddress(std::string address, int port, int version) {
    this->ip = address;
    if(port < 0 || port > 65535) {
        throw std::invalid_argument("Invalid port range!");
    }
    this->port = port;
    this->version = version;
}

std::string InternetAddress::getIp() {
    return this->ip;
}

int InternetAddress::getPort() {
    return this->port;
}

int InternetAddress::getVersion() {
    return this->version;
}

std::string InternetAddress::toString() {
    return std::to_string(this->ip) + " " + std::to_string(this->port);
}

bool InternetAddress::equals(InternetAddress *address) {
    return this->ip == address->ip && this->port == address->port && this->version == address->version;
}