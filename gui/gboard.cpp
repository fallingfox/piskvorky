#include "gboard.hpp"

void GBoard::draw(sf::RenderWindow& window) const {
    float pw = window.getSize().x / getWidth();
    float ph = window.getSize().y / getHeight();
    float tileSize = (pw > ph) ? ph : pw;

    for (int y = 0; y < getHeight(); y++) {
        for (int x = 0; x < getWidth(); x++) {
            sf::RectangleShape r(sf::Vector2f(tileSize, tileSize));
            r.setFillColor(sf::Color(200, 200, 200));
            r.setOutlineColor(sf::Color::Black);
            r.setOutlineThickness(-2);
            r.setPosition(x * tileSize, y * tileSize);
            window.draw(r);
        }
    }
}