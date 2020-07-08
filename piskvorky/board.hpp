/**
 * Board
 * Třída reprezentuící hrací plochu. Uchovávává pozici jednotlivých kamenů a umožňuje jejich vložení.
 */

#ifndef _BOARD_HPP
#define _BOARD_HPP

#include "stone.hpp"

class Board {
    // *** Atributy
    int _width, _height;    // šířka (počet sloupců) a výška (počet řádků) hrací plochy
    Stone** _stones;        // kolekce vložených kamenů

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
        // metoda pro kontrolu rozměrů hrací plochy
        bool checkDimension(const int width, const int height);
        // metoda pro kontrolu pozice na hrací ploše
        bool checkPosition(const int x, const int y) const;
};

#endif