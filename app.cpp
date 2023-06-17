#include <SFML/Graphics.hpp>
#include "./AND.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bresadsssboard++");

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        AND and_gate;
        and_gate.setNumberOfInputs(5);

        and_gate.setInput(11111);
        and_gate.setOutput();
        and_gate.draw(&window, 300, 300);
        window.display();
    }

    return 0;
}