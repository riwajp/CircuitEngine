#include <SFML/Graphics.hpp>
#include <iostream>
#include "../Connectable.cpp"

class Bulb : public Connectable
{

public:
    void draw(sf::RenderWindow *window, float x, float y, float size)
    {
        this->x = x + size;
        this->y = y + size;
        sf::CircleShape bulb_head;
        bulb_head.setRadius(size);
        bulb_head.setPosition(x, y);
        bulb_head.setFillColor(state ? sf::Color::Yellow : sf::Color::White);
        window->draw(bulb_head);
    }
};