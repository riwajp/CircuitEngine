#include <iostream>
#include <SFML/Graphics.hpp>
#include "./Shapes/Line.cpp"

class OUTPUT
{

public:
    bool output = false;
    int length = 150;
    float width = 5;
    float x, y;
    sf::Color color = sf::Color::White;

    void draw(sf::RenderWindow *window, float x, float y)
    {

        Line line;
        line.color = color;
        line.draw(window, x, y, width, length);
        this->x = x;
        this->y = y;
    }
};
