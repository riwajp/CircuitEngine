#include <SFML/Graphics.hpp>
#pragma once

class Line
{

public:
    sf::Color color = sf::Color::White;

    void draw(sf::RenderWindow *window, float x, float y, float width, float length)
    {
        sf::VertexArray lines(sf::Quads, 5);

        lines[0] = sf::Vector2f(x, y - width / 2);
        lines[1] = sf::Vector2f(x, y + width / 2);
        lines[2] = sf::Vector2f(x + length, y + width / 2);
        lines[3] = sf::Vector2f(x + length, y - width / 2);
        lines[4] = sf::Vector2f(x - length, y - width / 2);
        for (int i = 0; i <= 4; i++)
        {
            lines[i].color = color;
        }

        window->draw(lines);
    }
};