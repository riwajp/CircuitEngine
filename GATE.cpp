#include <iostream>
#include "./INPUT.cpp"
#include "./OUTPUT.cpp"
#include "./BOX.cpp"
#include <SFML/Graphics.hpp>

class GATE
{

public:
    int number_of_inputs;
    INPUT *inputs = new INPUT[10];

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
    void draw(sf::RenderWindow *window, float x, float y)
    {

        drawBox(window, x, y);
        drawInputs(window);
    }
};