#include <iostream>
#include <SFML/Graphics.hpp>
#include "./Shapes/Line.cpp"
#include "./Connectable.cpp"

#pragma once

class OUTPUT : public Connectable
{

public:
    int length = 150;
    float width = 5;

    void draw(sf::RenderWindow *window, float x, float y, char direction)
    {
        int width = this->width;
        int length = this->length;

        Line line;
        line.color = state ? sf::Color::Green : sf::Color::Red;
        line.draw(window, x, y, width, length, direction);

        this->x = direction == 'l' ? x - length : direction == 'r' ? x + length
                                                                   : x;
        this->y = direction == 't' ? y - length : direction == 'b' ? y + length
                                                                   : y;
    }
};
