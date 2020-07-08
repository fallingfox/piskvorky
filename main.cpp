#include <iostream>

#include "piskvorky/piskvorky.hpp"

#define WIDTH 10
#define HEIGHT 10

int main() {
    Piskvorky p;
    p.setBoard(new Board(WIDTH, HEIGHT));
    Player* pl1 = new Player("Jakub", 'X');
    Player* pl2 = new Player("Pindruse", 'O');
    p.addPlayer(pl1);
    p.addPlayer(pl2);
    p.setWinSequence(5);

    p.getBoard()->setStone(1, 0, new Stone(pl2));
    p.getBoard()->setStone(5, 0, new Stone(pl1));
    p.getBoard()->setStone(4, 1, new Stone(pl1));
    p.getBoard()->setStone(3, 2, new Stone(pl1));
    p.getBoard()->setStone(2, 3, new Stone(pl1));
    p.getBoard()->setStone(1, 4, new Stone(pl1));

    std::cout << (*p.getBoard()) << std::endl;

    Player* winner = p.checkWinner();
    if (winner != nullptr) std::cout << winner->getName();

    return 0;
}