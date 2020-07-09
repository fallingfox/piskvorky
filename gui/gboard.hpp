#ifndef _GBOARD_HPP
#define _GBOARD_HPP

#include "SFML/Graphics.hpp"
#include "../piskvorky/board.hpp"

class GBoard : public Board {
    // *** Metody
    public:
        void draw(sf::RenderWindow& window) const;
};


#endif