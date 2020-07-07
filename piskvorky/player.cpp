#include "player.hpp"

// Konstruktor
Player::Player(std::string name, char symbol) : _name(name), _symbol(symbol) {}

// Gettery
const std::string Player::getName() const {
    return _name;
}

const char Player::getSymbol() const {
    return _symbol;
}

// Operátor
std::ostream& operator<<(std::ostream& output, Player& player) {
    output << player.getName();
    return output;
}