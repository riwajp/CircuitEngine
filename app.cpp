#include <SFML/Graphics.hpp>
#include "./Gates/AND.cpp"
#include "./Gates/OR.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(900, 900), "Breadboard++");

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        // AND and_gate;
        // and_gate.setNumberOfInputs(5);

        // and_gate.setInput(11111);
        // and_gate.setOutput();
        // and_gate.draw(&window, 300, 300);

        OR or_gate;
        or_gate.setNumberOfInputs(5);

        or_gate.setInput(0);
        or_gate.setOutput();
        or_gate.direction = 'b';
        or_gate.draw(&window, 300, 600);
        window.display();
    }

    return 0;
}