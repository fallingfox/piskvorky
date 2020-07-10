#include <iostream>

#include <SFML/Graphics.hpp>
#include "piskvorky/piskvorky.hpp"
#include "gui/gboard.hpp"

#define WIDTH 10
#define HEIGHT 10

int main() {
    sf::RenderWindow _window(sf::VideoMode(600, 200), "Piškvorky");
    Piskvorky _game;
    int _playeIndex = 0;
    Board* board = new Board(10, 12);
    Player* p1 = new Player("Adam", 'X');
    Player* p2 = new Player("Tomáš", 'O');
    _game.setBoard(board);
    _game.addPlayer(p1);
    _game.addPlayer(p2);

    while (_window.isOpen()) {
        sf::Event event;
        while(_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                _window.close();
            else if (event.type == sf::Event::Resized) {
                sf::FloatRect rect(0, 0, event.size.width, event.size.height);
                _window.setView(sf::View(rect));
            } else if (event.type == sf::Event::MouseButtonPressed) {
                
            }
        }

        _window.clear();
        reinterpret_cast<GBoard*>(board)->draw(_window);
        _window.display();
    }
    return 0;
}