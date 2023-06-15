#include <SFML/Graphics.hpp>
#include "./Drawables.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    Drawables drawables;
    drawables.scan();
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        // std::cout << drawables.last_drawable_index;
        drawables.draw(&window);

        window.display();
    }

    return 0;
}