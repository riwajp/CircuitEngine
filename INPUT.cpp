#include "./Shapes/BOX.cpp"
#include <iostream>
#include "./Shapes/Line.cpp"
#pragma once

class INPUT
{

public:
    int length = 150;
    bool input = false;
    int width = 3;
    float port_x, port_y;

    void draw(sf::RenderWindow *window, float x, float y, char direction)

    {
        Line line;
        line.color = input ? sf::Color::Green : sf::Color::Red;

        if (direction == 'r')
        {
            line.draw(window, x - length, y, width, length, direction);
            port_x = x - length;
            port_y = y;
        }

        if (direction == 'l')
        {
            line.draw(window, x + length, y, width, length, direction);
            port_x = x + length;
            port_y = y;
        }

        if (direction == 't')
        {
            line.draw(window, x, y + length, width, length, direction);
            port_x = x;
            port_y = y + length;
        }

        if (direction == 'b')
        {
            line.draw(window, x, y - length, width, length, direction);
            port_x = x;
            port_y = y - length;
        }
    }
};
