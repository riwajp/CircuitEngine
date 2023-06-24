#include <SFML/Graphics.hpp>
#include "./Wire.cpp"
#include <iostream>

#pragma once

class Connectable
{

public:
    float x, y;
    bool state = false;
    void connect(sf::RenderWindow *window, Connectable component, char mode = 'h')
    {

        state = component.state;

        Wire wire(state);
        wire.draw(window, x, y, component.x, component.y, mode);
    }
};