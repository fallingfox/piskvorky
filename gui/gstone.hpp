#ifndef _GSTONE_HPP
#define _GSTONE_HPP

#include <SFML/Graphics.hpp>
#include "../piskvorky/stone.hpp"

class GStone : public Stone {
    // *** Metody
    public:
        void draw(const float x, const float y, const float size, sf::RenderWindow&) const;
};


#endif