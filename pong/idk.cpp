#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>

enum class GameState {
    Menu,
    Playing,
    Paused
};

int main() {
    GameState state = GameState::Menu;

    sf::RenderWindow window(sf::VideoMode({800, 800}), "Pong :D");
    
    sf::RectangleShape RectangleEnemy({10.f, 100.f});
    RectangleEnemy.setPosition({780.f, 10.f});
    RectangleEnemy.setFillColor(sf::Color::Blue);

    sf::RectangleShape rectangle({10.f, 100.f});
    rectangle.setPosition({20.f, 300.f});
    rectangle.setFillColor(sf::Color::Blue);

    sf::RectangleShape PlayButton({50.f, 20.f});
    PlayButton.setPosition({
            window.getSize().x / 4.f -100.f,
            window.getSize().y /6.f -100.f,
            });
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
        }

        window.clear();

        if (state == GameState::Menu) {
           window.draw(PlayButton);
        }

        window.draw(rectangle);
        window.draw(RectangleEnemy);
        window.draw(circle);

        window.display();
    }

    return 0;
}
