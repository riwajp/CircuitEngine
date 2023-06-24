#include <SFML/Graphics.hpp>

#include "Shapes/line.cpp"
#include <math.h>

class Wire
{

public:
    bool state = false;
    sf::Color color;

    Wire(bool state)
    {
        this->state = state;
    }
    void draw(sf::RenderWindow *window, float x1, float y1, float x2, float y2)
    {

        Line h_line, v_line;

        color = state ? sf::Color::Green : sf::Color::Red;
        h_line.color = color;
        v_line.color = color;

        float dx = x2 - x1;
        float dy = y2 - y1;

        bool go_right = x2 > x1;
        bool go_down = y2 > y1;

        h_line.draw(window, x1, y1, 5, abs(dx), go_right ? 'r' : 'l');

        v_line.draw(window, x1 + dx, y1, 5, abs(dy), go_down ? 'b' : 't');
    }
};