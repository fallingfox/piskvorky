#ifndef _GBOARD_HPP
#define _GBOARD_HPP

#include "SFML/Graphics.hpp"
#include "../piskvorky/board.hpp"

class GBoard : public Board {
    // *** Konstruktor
    public:
        GBoard(const int width, const int height);
        // GBoard(const Board& board);

    // *** Metody
    public:
        void draw(sf::RenderWindow& window) const;
};


#endif