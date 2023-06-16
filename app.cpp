#include <SFML/Graphics.hpp>
#include "./GATE.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        GATE gate;
        gate.setNumberOfInputs(5);
        gate.draw(&window, 300, 300);
        window.display();
    }

    return 0;
}