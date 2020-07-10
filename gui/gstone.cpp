#include "gstone.hpp"
#include <iostream>

void GStone::draw(const float x, const float y, const float size,
                    sf::RenderWindow& window) const {
    sf::Image img;
    sf::Sprite sprite;
    sf::Texture texture;

    if (getPlayer()->getSymbol() == 'X') img.loadFromFile("res/sprite_x.png");
    else img.loadFromFile("res/sprite_o.png");

    texture.loadFromImage(img);
    sprite.setTexture(texture);
    sprite.setPosition({x, y});

    sprite.setScale(size / img.getSize().x, size / img.getSize().y);
    window.draw(sprite);
}