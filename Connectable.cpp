#include <SFML/Graphics.hpp>
#include "./Wire.cpp"
#pragma once

class Connectable
{

public:
    float x, y;
    bool state = false;
    void connect(sf::RenderWindow *window, Connectable component)
    {
        float nx = component.x;
        float ny = component.y;
        state = component.state;
        Wire wire(state);
        wire.draw(window, x, y, component.x, component.y);
    }
};