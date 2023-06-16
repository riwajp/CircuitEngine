#include <SFML/Graphics.hpp>
#include "./BOX.cpp"
#include <iostream>

class INPUT
{
    int size = 100;

public:
    bool input = 0;

    void draw(sf::RenderWindow *window, float x, float y)
    {
        // std::cout << x1 << "   " << y1 << std::endl;
        sf::VertexArray lines(sf::LinesStrip, 2);

        lines[0] = sf::Vector2f(x, y);
        lines[1] = sf::Vector2f(x - size, y);
        lines[0].color = sf::Color::White;
        lines[0].color = sf::Color::White;

        window->draw(lines);
    }
};
