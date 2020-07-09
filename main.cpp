#include <iostream>

#include <SFML/Graphics.hpp>
#include "piskvorky/piskvorky.hpp"
#include "gui/gboard.hpp"

#define WIDTH 10
#define HEIGHT 10

int main() {
    sf::RenderWindow _window(sf::VideoMode(600, 600), "Piškvorky");
    Board board(10, 10);

    while (_window.isOpen()) {
        sf::Event event;
        while(_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                _window.close();
        }

        _window.clear();
        ((GBoard*) &board)->draw(_window);
        // reinterpret_cast<GBoard*>(board)->draw(_window);
        _window.display();
    }
    return 0;
}