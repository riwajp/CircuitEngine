#include <SFML/Graphics.hpp>
#include "./Gates/AND.cpp"
#include "./Gates/OR.cpp"

int main()
{
    int SCREEN_X, SCREEN_Y;
    int VIEW_X, VIEW_Y;
    float scale = 1;

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Breadboard++");

    sf::View view(sf::FloatRect(0, 0, 1000, 1000));

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseWheelScrolled)
            {

                view.zoom(1 + event.mouseWheelScroll.delta * 0.05);
                std::cout << event.mouseWheelScroll.delta * 0.05 << std::endl;
            }
            if (event.type == sf::Event::KeyPressed)
            {
                std::cout << event.key.code << std::endl;
                if (event.key.code == 22)
                {
                    view.move(0, -40);
                    std::cout << "up";
                }

                if (event.key.code == 18)
                {

                    view.move(0, 40);
                    std::cout << "down";
                }

                if (event.key.code == 0)
                {
                    view.move(-40, 0);
                    std::cout << "left";
                }

                if (event.key.code == 3)
                {
                    view.move(40, 0);
                    std::cout << "right";
                }
            }
        }
        window.clear();
        AND and_gate(scale);
        and_gate.setNumberOfInputs(5);

        and_gate.setInput(11111);
        and_gate.setOutput();
        and_gate.draw(&window, 500, 300);

        OR or_gate(scale);
        or_gate.setNumberOfInputs(5);

        or_gate.setInput(0);
        or_gate.setOutput();
        or_gate.direction = 'r';
        or_gate.draw(&window, 500, 600);

        window.setView(view);
        window.display();
    }

    return 0;
}