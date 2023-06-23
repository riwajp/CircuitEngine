#include <iostream>
#include "../INPUT.cpp"
#include "../OUTPUT.cpp"
#include "../Shapes/BOX.cpp"
#include <SFML/Graphics.hpp>

#pragma once
class GATE
{

public:
    GATE(){};
    int number_of_inputs;
    INPUT *inputs;

    OUTPUT output;

    float scale = 1;

    BOX box;

    char direction = 'r';

    void setDirection(char d)
    {
        direction = d;
    }

    void setNumberOfInputs(int n)
    {

        number_of_inputs = n;
        inputs = new INPUT[n];
        for (int i = 0; i < number_of_inputs; i++)
        {
            INPUT input;
            inputs[i] = input;
        }
    }

    void setInput(int bitstring)
    {
        for (int i = number_of_inputs - 1; i >= 0; i--)
        {
            inputs[i].input = bitstring % 10;

            bitstring /= 10;
        }
    }

    void drawBox(sf::RenderWindow *window, float x, float y)
    {
        box.scale = scale;
        box.draw(window, x, y, direction);
    }

    void drawInputs(sf::RenderWindow *window)
    {
        float x, y, dx, dy;
        if (direction == 'l' or direction == 'r')
        {

            dy = ((box.i_bottom.y - box.i_top.y) / (number_of_inputs + 1));
            dx = 0;
            x = box.i_top.x;
            y = box.i_top.y + dy;
        }
        else
        {

            dy = 0;
            dx = ((box.i_bottom.x - box.i_top.x) / (number_of_inputs + 1));
            x = box.i_top.x + dx;
            y = box.i_top.y;
        }

        for (int i = 0; i < number_of_inputs; i++)
        {
            inputs[i].scale = scale;
            inputs[i].draw(window, x, y, direction);

            y += dy;
            x += dx;
        }
    }

    void drawOutput(sf::RenderWindow *window)
    {
        output.scale = scale;
        float x1 = box.o_top.x;
        float x2 = box.o_bottom.x;

        float y1 = box.o_top.y;
        float y2 = box.o_bottom.y;
        if (direction == 'l' or direction == 'r')
        {
            output.draw(window, x1, (y2 + y1) / 2, direction);
        }
        else
        {
            output.draw(window, (x1 + x2) / 2, y2, direction);
        }
    }

    void draw(sf::RenderWindow *window, float x, float y)
    {

        drawBox(window, x, y);
        drawInputs(window);
        drawOutput(window);
    }
};