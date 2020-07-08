/**
 * Player
 * Třída reprezentujíí hráče v aktuální hře
 */
#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include <string>
#include <ostream>

class Player {
    // *** Atributy
    std::string _name;  // jméno hráče
    char _symbol;       // znak, který repreznetuje hráče na hrací ploše

    // *** Konstruktor
    public:
        Player(std::string name, char symbol);

    // *** Gettery
    public:
        const std::string getName() const;
        const char getSymbol() const;
};

// *** Operátory
std::ostream& operator<<(std::ostream&, Player&);

#endif