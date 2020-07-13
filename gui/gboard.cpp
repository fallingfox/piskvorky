#include <cmath>
#include "gboard.hpp"
#include "gstone.hpp"

// Konstruktor
GBoard::GBoard(const int width, const int height) : Board(width, height) {}

// Settery
void GBoard::setStone(const int x, const int y, Stone* stone) {
    
}

// Metody
void GBoard::draw(sf::RenderWindow& window) const {
    for (int y = 0; y < getHeight(); y++) {
        for (int x = 0; x < getWidth(); x++) {

            sf::RectangleShape r(sf::Vector2f(tileSize_, tileSize_));
            r.setFillColor(sf::Color(200, 200, 200));
            r.setOutlineColor(sf::Color::Black);
            r.setOutlineThickness(-borderThickness_);
            r.setPosition(xOffset_ + x * tileSize_, yOffset_ + y * tileSize_);
            window.draw(r);

            Stone* s = getStone(x, y);
            if (s == nullptr) continue;
            reinterpret_cast<GStone*>(s)->draw(x * tileSize_ + xOffset_ + borderThickness_, y * tileSize_ + yOffset_ + borderThickness_, spriteSize_, window);
        }
    }
}

void GBoard::resize(const sf::Vector2f& window_size) {
    tileSize_ = std::min(window_size.x / Board::getWidth(), window_size.y / Board::getHeight());
    borderThickness_ = std::max(1.0, tileSize_ * 0.05);
    spriteSize_ = tileSize_ - borderThickness_ * 2;
    xOffset_ = std::max((window_size.x - tileSize_ * Board::getWidth()) / 2, 0.0f);
    yOffset_ = std::max((window_size.y - tileSize_ * Board::getHeight()) / 2, 0.0f);
}