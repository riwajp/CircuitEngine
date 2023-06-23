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
    float x, y;

    void draw(sf::RenderWindow *window, float x, float y, char direction)

    {

        int width = this->width;
        int length = this->length;

        Line line;
        line.color = input ? sf::Color::Green : sf::Color::Red;

        if (direction == 'r')
        {
            line.draw(window, x - length, y, width, length, direction);
            this->x = x - length;
            this->y = y;
        }

        if (direction == 'l')
        {
            line.draw(window, x + length, y, width, length, direction);
            this->x = x + length;
            this->y = y;
        }

        if (direction == 't')
        {
            line.draw(window, x, y + length, width, length, direction);
            this->x = x;
            this->y = y + length;
        }

        if (direction == 'b')
        {
            line.draw(window, x, y - length, width, length, direction);
            this->x = x;
            this->y = y - length;
        }
    }
};
