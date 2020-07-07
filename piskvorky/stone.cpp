#include "stone.hpp"

// Konstruktor
Stone::Stone(Player* player) : _player(player) {}

// Gettery
Player* Stone::getPlayer() const {
    return _player;
}

// Operátor
std::ostream& operator<<(std::ostream& output, Stone& stone) {
    output << stone.getPlayer()->getSymbol();
    return output;
}