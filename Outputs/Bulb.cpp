#include <SFML/Graphics.hpp>
#include <iostream>

class Bulb
{

public:
    float x, y;

    void draw(sf::RenderWindow *window, float x, float y, float size)
    {
        this->x = x;
        this->y = y;
        sf::CircleShape bulb_head;
        bulb_head.setRadius(size);
        bulb_head.setPosition(x, y);
        bulb_head.setFillColor(sf::Color::Yellow);
        window->draw(bulb_head);
    }
};