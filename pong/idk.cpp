#include "UTILS.hpp"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

enum class GameState {
    Menu,
    Playing,
    Paused
};

int main() {
    GameState state = GameState::Menu;
    sf::Font font;
    
    sf::RenderWindow window(sf::VideoMode({800, 800}), "Pong :D");
    if (!font.openFromFile("Fonts/VT323/VT323-Regular.ttf")) {
        println("Failed to load font VT323");
    }

    sf::RectangleShape RectangleEnemy({10.f, 100.f});
    RectangleEnemy.setPosition({780.f, 10.f});
    RectangleEnemy.setFillColor(sf::Color::Blue);

    sf::RectangleShape rectangle({10.f, 100.f});
    rectangle.setPosition({20.f, 300.f});
    rectangle.setFillColor(sf::Color::Blue);

    sf::RectangleShape PlayButton({100.f, 50.f});
    PlayButton.setPosition({626.f, 115.f});
    sf::Color PlayButtonColour(10, 145, 154);
    PlayButton.setFillColor(PlayButtonColour);

    sf::CircleShape circle(10.f);
    circle.setPosition({200.f, 500.f});
    circle.setFillColor(sf::Color::Blue);


    float speed = 10.f;

    while (window.isOpen()) {
        while (const auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }        
        

            if (const auto* key = event->getIf<sf::Event::KeyPressed>()) {
               if (key->code == sf::Keyboard::Key::W) {
                rectangle.move({0.f, -speed});
               }
            
                if (key->code == sf::Keyboard::Key::S) {
                rectangle.move({0.f, speed});
               }
            }

            if (const auto* MousePressed = event->getIf<sf::Event::MouseButtonPressed>()) {
                print(MousePressed->position.x);
                print(",");
                println(MousePressed->position.y);
            }
        }

        window.clear();

        if (state == GameState::Menu) {
           window.draw(PlayButton);
        }
        if (state == GameState::Playing) {
           window.draw(rectangle);
           window.draw(RectangleEnemy);
           window.draw(circle);
        }

        window.display();
    }

    return 0;
}
