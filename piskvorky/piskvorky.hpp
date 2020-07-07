#ifndef _PISKVORKY_HPP
#define _PISKVORKY_HPP

#include <vector>
#include "board.hpp"
#include "player.hpp"

class Piskvorky {
    // *** Atributy
    Board* _board;
    std::vector<Player*> _players;

    // *** Konstruktor, destruktor
    public:
        Piskvorky();
        ~Piskvorky();

    // *** Gettery
    public:
        Board* getBoard() const;
};

#endif