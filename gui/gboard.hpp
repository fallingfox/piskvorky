#ifndef _GBOARD_HPP
#define _GBOARD_HPP

#include "SFML/Graphics.hpp"
#include "../piskvorky/board.hpp"

class GBoard : public Board {
    // *** Atributy
    float tileSize_, spriteSize_, borderThickness_, xOffset_, yOffset_;

    // *** Konstruktor
    public:
        GBoard(const int width, const int height);

    // *** Settery
    public:
        void setStone(const int x, const int y, Stone* stone);

    // *** Metody
    public:
        void draw(sf::RenderWindow& window) const;
        void resize(const sf::Vector2f& window_size);
};

#endif