#ifndef _GPISKVORKY_HPP
#define _GPISKVORKY_HPP

#include <SFML/Graphics.hpp>
#include "../piskvorky/piskvorky.hpp"
#include "gboard.hpp"

class GPiskvorky : public Piskvorky {
    // *** Settery
    public:
        void setBoard(GBoard*);
    private:
        void setBoard(Board*) override;

    // *** Metody
    public:
        void draw(sf::RenderWindow& window) const;
        void resize(const sf::Vector2f& window_size);
};


#endif