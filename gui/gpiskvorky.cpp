#include "gpiskvorky.hpp"

// Settery
void GPiskvorky::setBoard(GBoard* board) {
    Piskvorky::setBoard((Board*) board);
}

void GPiskvorky::setBoard(Board* board) {
    throw "Method is not allowed! Use GBoard!";
}

// Metody
void GPiskvorky::draw(sf::RenderWindow& window) const {
    reinterpret_cast<GBoard*>(getBoard())->draw(window);
}

void GPiskvorky::resize(const sf::Vector2f& window_size) {
    reinterpret_cast<GBoard*>(getBoard())->resize(window_size);
}