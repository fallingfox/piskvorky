/**
 * Stone
 * Reprezentace hracího kamene daného hráče.
 */

#ifndef _STONE_HPP
#define _STONE_HPP

#include <ostream>
#include "player.hpp"

class Stone {
    // *** Atributy
    Player* _player;    // hráč, který vlastní kámen

    // *** Konstruktor
    public:
        Stone(Player* player);

    // *** Gettery
    public:
        Player* getPlayer() const;
};

// *** Operátory
std::ostream& operator<<(std::ostream&, Stone&);

#endif