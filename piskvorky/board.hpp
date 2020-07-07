#ifndef _BOARD_HPP
#define _BOARD_HPP

#include "stone.hpp"

class Board {
    // *** Atributy
    int _width, _height;
    Stone** _stones;

    // *** Konstruktor, destruktor
    public:
        Board(const int width, const int height);
        ~Board();

    // *** Gettery
    public:
        const int getWidth() const;
        const int getHeight() const;
        Stone* getStone(const int x, const int y) const;

    // *** Settery
    public:
        void setStone(const int x, const int y, Stone* stone);

    // *** Metody
    private:
        bool checkDimension(const int width, const int height);
        bool checkPosition(const int x, const int y) const;
};

#endif