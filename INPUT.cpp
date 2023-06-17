#include "./BOX.cpp"
#include <iostream>
#include "./Shapes/Line.cpp"

class INPUT
{

public:
    int length = 150;
    bool input = false;
    int width = 3;
    float x, y;
    sf::Color color = sf::Color::White;

    void draw(sf::RenderWindow *window, float x, float y)

    {
        Line line;
        line.color = color;
        line.draw(window, x - length, y, width, length);
        this->x = x;
        this->y = y;
    }
};
