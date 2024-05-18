/**
* @file ServerInterface.h
*/
#pragma once
#include "raklib/protocol/EncapsulatedPacket.h"

class ServerInterface {
    public:
    void sendEncapsulated(int sessionId, EncapsulatedPacket packet, bool immediate = false);
    void sendRaw(std::string address, int port, std::string payload);
    void closeSession(int sessionId);
    void setName(std::string name);
    
}