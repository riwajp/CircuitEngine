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
    float port_x, port_y;

    void draw(sf::RenderWindow *window, float x, float y, char direction)
    {

        Line line;
        line.color = output ? sf::Color::Green : sf::Color::Red;
        line.draw(window, x, y, width, length, direction);
        port_x = x;
        port_y = y;
    }
};
