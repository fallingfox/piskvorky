#ifndef _GSTONE_HPP
#define _GSTONE_HPP

#include <SFML/Graphics.hpp>
#include "../piskvorky/stone.hpp"

class GStone : public Stone {
    // *** Konstruktor
    public:
        GStone(const Stone&);

    // *** Metody
    public:
        void draw(sf::RenderWindow&) const;
};


#endif