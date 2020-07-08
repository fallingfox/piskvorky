#ifndef _PISKVORKY_HPP
#define _PISKVORKY_HPP

#include <vector>
#include "board.hpp"
#include "player.hpp"

class Piskvorky {
    // *** Atributy
    int _win_sequence;
    Board* _board;
    std::vector<Player*> _players;
    Player* _winner = nullptr;

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