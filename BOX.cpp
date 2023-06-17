#include <SFML/Graphics.hpp>
#include <iostream>
#pragma once

class BOX
{
    int height = 200;
    int width = 200;

public:
    sf::Vector2f i_top, i_bottom, o_top, o_bottom; // 4 points of the box

    void draw(sf::RenderWindow *window, float x, float y)
    {
        sf::VertexArray lines(sf::Quads, 5);

        i_top = {x - width / 2, y - height / 2};
        i_bottom = {x - width / 2, y + height / 2};
        o_top = {x + width / 2, y - height / 2};
        o_bottom = {x + width / 2, y + height / 2};

        lines[0].position = i_top;
        lines[1].position = i_bottom;
        lines[2].position = o_bottom;
        lines[3].position = o_top;
        lines[4].position = i_top;

        for (int i = 0; i <= 4; i++)
        {
            lines[i].color = sf::Color::Magenta;
        }

        window->draw(lines);
    }
};