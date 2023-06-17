#include <iostream>
#include "./INPUT.cpp"
#include "./OUTPUT.cpp"
#include "./BOX.cpp"
#include <SFML/Graphics.hpp>

class GATE
{

public:
    int number_of_inputs;
    INPUT *inputs;

    OUTPUT output;

    BOX box;

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

        box.draw(window, x, y);
    }

    void drawInputs(sf::RenderWindow *window)
    {
        float x = box.i_top.x;
        float dy = ((box.i_bottom.y - box.i_top.y) / (number_of_inputs + 1));
        float y = box.i_top.y + dy;

        std::cout << x << "   " << y << std::endl;
        for (int i = 0; i < number_of_inputs; i++)
        {
            inputs[i].draw(window, x, y);
            y += dy;
        }
    }

    void drawOutput(sf::RenderWindow *window)
    {
        float x = box.o_top.x;

        float y1 = box.o_top.y;
        float y2 = box.o_bottom.y;
        output.draw(window, x, (y2 + y1) / 2);
    }
    void draw(sf::RenderWindow *window, float x, float y)
    {

        drawBox(window, x, y);
        drawInputs(window);
        drawOutput(window);
    }
};