#include <algorithm>
#include <iostream>
#include "piskvorky.hpp"

// Konsturktor
Piskvorky::~Piskvorky() {
    delete _board;
    std::for_each(_players.cbegin(), _players.cend(), [](Player* player) { delete player; });
    _players.clear();
}

// Gettery
Board* Piskvorky::getBoard() const {
    return _board;
}

Player** Piskvorky::getPlayers() {
    return _players.data();
}

const int Piskvorky::getWinSequence() const {
    return _win_sequence;
}

// Settery
void Piskvorky::setBoard(Board* board) {
    _board = board;
}

void Piskvorky::setWinSequence(const int seq) {
    // TODO kontrola parametru
    _win_sequence = seq;
}

// Metody
void Piskvorky::addPlayer(Player* player) {
    this->_players.push_back(player);
}

Player* Piskvorky::checkWinner() {
    for (int y = 0, h = _board->getHeight(); y < h; y++) {
        for (int x = 0, w = _board->getWidth(); x < w; x++) {
            Stone* s = _board->getStone(x, y);
            if (s == nullptr) continue;
            Player* p = s->getPlayer();

            int hor = 1, ver = 1, diaL = 1, diaR = 1;
            for (int i = 1; i < _win_sequence; i++) { // vertikální
                try {
                    s = _board->getStone(x, y + i);
                    if (s == nullptr) break;
                    if (s->getPlayer() != p) break;
                    ver++;
                } catch (char const* error) {
                    break;
                }
            }

            if (ver >= _win_sequence) return p;

            for (int i = 1; i < _win_sequence; i++) { // horizontální
                try {
                    s = _board->getStone(x + i, y);
                    if (s == nullptr) break;
                    if (s->getPlayer() != p) break;
                    hor++;
                } catch (char const* error) {
                    break;
                }
            }
            if (hor >= _win_sequence) return p;

            for (int i = 1; i < _win_sequence; i++) { // diagonální vpravo
                try {
                    s = _board->getStone(x + i, y + i);
                    if (s == nullptr) break;
                    if (s->getPlayer() != p) break;
                    diaR++;
                } catch (char const* error) {
                    break;
                }
            }
            if (diaR >= _win_sequence) return p;

            for (int i = 1; i < _win_sequence; i++) { // diagonální vlevo
                try {
                    s = _board->getStone(x - i, y + i);
                    if (s == nullptr) break;
                    if (s->getPlayer() != p) break;
                    diaL++;
                } catch (char const* error) {
                    break;
                }
            }
            if (diaL >= _win_sequence) return p;
        }
    }


    return nullptr;
}

Player* Piskvorky::checkWinner(const int last_x, const int last_y) {
    // TODO impl
    return nullptr;
}