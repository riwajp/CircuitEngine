#include <iostream>
#include <SFML/Graphics.hpp>
#include "./Shapes/Line.cpp"
#pragma once

class OUTPUT
{

public:
    bool output = false;
    int length = 150;
    float width = 5;
    float x, y;

    void draw(sf::RenderWindow *window, float x, float y, char direction)
    {
        int width = this->width;
        int length = this->length;
        ;

        Line line;
        line.color = output ? sf::Color::Green : sf::Color::Red;
        line.draw(window, x, y, width, length, direction);
        this->x = x;
        this->y = y;
    }
};
