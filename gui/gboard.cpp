#include "gboard.hpp"
#include "gstone.hpp"
#include <iostream>
#include <cmath>

void GBoard::setStone(const int x, const int y, Stone* stone) {
    
}


void GBoard::draw(sf::RenderWindow& window) const {
    float pw = window.getSize().x / getWidth();
    float ph = window.getSize().y / getHeight();
    float tileSize = std::min(pw, ph);
    std::cout << tileSize << " " << window.getSize().x << " " << window.getSize().y << std::endl;

    for (int y = 0; y < getHeight(); y++) {
        for (int x = 0; x < getWidth(); x++) {

            sf::RectangleShape r(sf::Vector2f(tileSize, tileSize));
            r.setFillColor(sf::Color(200, 200, 200));
            r.setOutlineColor(sf::Color::Black);
            r.setOutlineThickness(-2);
            r.setPosition(x * tileSize, y * tileSize);
            window.draw(r);

            Stone* s = getStone(x, y);
            if (s == nullptr) continue;
            reinterpret_cast<GStone*>(s)->draw(x * tileSize + 2, y * tileSize + 2, tileSize - 4, window);
        }
    }
}