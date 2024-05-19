#include "minecraft/player/PlayerInfo.h"

PlayerInfo::PlayerInfo(std::string _username) {
    this->username = _username;
}

std::string PlayerInfo::getUsername() {
    return this->username;
}