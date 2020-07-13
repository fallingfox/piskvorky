#include <iostream>

#include <SFML/Graphics.hpp>
#include "gui/gpiskvorky.hpp"

#define WIDTH 10
#define HEIGHT 10

int main() {
    sf::RenderWindow window(sf::VideoMode(600, 200), "Piškvorky");
    GPiskvorky game;
    GBoard* board = new GBoard(20, 20);
    Player* p1 = new Player("A", 'X');
    Player* p2 = new Player("B", 'O');
    
    game.setBoard(board);
    game.addPlayer(p1);
    game.addPlayer(p2);

    game.getBoard()->setStone(0, 0, new Stone(p1));
    game.getBoard()->setStone(1, 0, new Stone(p2));

    game.resize({window.getSize().x * 1.0f, window.getSize().y * 1.0f});

    while (window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::Resized) {
                sf::FloatRect rect(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(rect));
                game.resize({event.size.width * 1.0f, event.size.height * 1.0f});
            } else if (event.type == sf::Event::MouseButtonPressed) {
                
            }
        }

        window.clear();
        game.draw(window);
        window.display();
    }
    return 0;
}