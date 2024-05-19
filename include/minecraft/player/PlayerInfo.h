#pragma once
#include <string>

class PlayerInfo {
    private:
    std::string username;
    public:
    PlayerInfo(std::string username);
    std::string getUsername();
};