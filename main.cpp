#include <iostream>

#include <SFML/Graphics.hpp>
#include "gui/gpiskvorky.hpp"

#define WIDTH 10
#define HEIGHT 10

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Piškvorky");
    GPiskvorky game;
    GBoard* board = new GBoard(20, 20);
    Player* p1 = new Player("Jakub", 'X');
    Player* p2 = new Player("Tomas", 'O');
    Player* winner = nullptr;

    game.setBoard(board);
    game.setWinSequence(5);
    game.addPlayer(p1);
    game.addPlayer(p2);

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
            } else if (event.type == sf::Event::MouseButtonPressed && !winner) {
                reinterpret_cast<GBoard*>(game.getBoard())->setStone(event.mouseButton.x, event.mouseButton.y, new Stone(game.nextPlayer()));
                winner = game.checkWinner();
            }
        }

        window.clear();
        game.draw(window);

        if (winner) {
            sf::RectangleShape rect({window.getSize().x * 1.0f, window.getSize().y * 1.0f});
            rect.setPosition(0, 0);
            rect.setFillColor(sf::Color(20, 20, 20, 200));
            sf::Font font;
            font.loadFromFile("res/bangers.ttf");
            sf::Text text(winner->getName(), font, 30);
            text.setPosition({window.getSize().x / 2.0f - text.getCharacterSize() * winner->getName().length() / 4.0f, window.getSize().y / 2.0f});

            window.draw(rect);
            window.draw(text);
        }

        window.display();
    }

    return 0;
}