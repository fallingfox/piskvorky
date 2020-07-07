#ifndef _STONE_HPP
#define _STONE_HPP

#include <ostream>
#include "player.hpp"

class Stone {
    // ** Atributy
    Player* _player;

    // *** Konstruktor
    public:
        Stone(Player* player);

    // *** Gettery
    public:
        Player* getPlayer() const;
};

std::ostream& operator<<(std::ostream&, Stone&);

#endif