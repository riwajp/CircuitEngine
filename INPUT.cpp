#include "./BOX.cpp"
#include <iostream>

class INPUT
{

public:
    // bool input = 0;
    int size = 150;
    bool input = false;

    void draw(sf::RenderWindow *window, float x, float y)
    {

        sf::VertexArray lines(sf::LinesStrip, 2);

        lines[0] = sf::Vector2f(x, y);
        lines[1] = sf::Vector2f(x - size, y);
        lines[0].color = sf::Color::White;
        lines[1].color = sf::Color::White;

        window->draw(lines);
    }
};
