#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include <string>
#include <ostream>

class Player {
    // *** Atributy
    std::string _name;
    char _symbol;

    // *** Konstruktor
    public:
        Player(std::string name, char symbol);

    // *** Gettery
    public:
        const std::string getName() const;
        const char getSymbol() const;
};

std::ostream& operator<<(std::ostream&, Player&);

#endif