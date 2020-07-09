#ifndef _PISKVORKY_HPP
#define _PISKVORKY_HPP

#include <vector>
#include "board.hpp"
#include "player.hpp"

class Piskvorky {
    // *** Atributy
    Board* _board   = nullptr;
    Player* _winner = nullptr;
    int _win_sequence;
    std::vector<Player*> _players;

    // *** Konstruktor, destruktor
    public:
        ~Piskvorky();

    // *** Gettery
    public:
        Board* getBoard() const;
        Player** getPlayers();
        const int getWinSequence() const;

    // *** Settery
    public:
        void setBoard(Board*);
        void setWinSequence(const int);

    // *** Metody
    public:
        void addPlayer(Player*);
        Player* checkWinner();
        Player* checkWinner(const int last_x, const int last_y);
};

#endif