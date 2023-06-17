#include <SFML/Graphics.hpp>
#pragma once

class Line
{

public:
    sf::Color color = sf::Color::White;

    void draw(sf::RenderWindow *window, float x, float y, float width, float length, char direction)
    {
        sf::VertexArray lines(sf::Quads, 5);
        if (direction == 'r')
        {
            lines[0] = sf::Vector2f(x, y - width / 2);
            lines[1] = sf::Vector2f(x, y + width / 2);
            lines[2] = sf::Vector2f(x + length, y + width / 2);
            lines[3] = sf::Vector2f(x + length, y - width / 2);
            lines[4] = sf::Vector2f(x - length, y - width / 2);
        }

        if (direction == 'l')
        {
            lines[0] = sf::Vector2f(x, y - width / 2);
            lines[1] = sf::Vector2f(x, y + width / 2);
            lines[2] = sf::Vector2f(x - length, y + width / 2);
            lines[3] = sf::Vector2f(x - length, y - width / 2);
            lines[4] = sf::Vector2f(x + length, y - width / 2);
        }

        if (direction == 't')
        {
            lines[0] = sf::Vector2f(x - width / 2, y);
            lines[1] = sf::Vector2f(x + width / 2, y);
            lines[2] = sf::Vector2f(x + width / 2, y - length);
            lines[3] = sf::Vector2f(x - width / 2, y - length);
            lines[4] = sf::Vector2f(x - width / 2, y);
        }

        if (direction == 'b')
        {
            lines[0] = sf::Vector2f(x - width / 2, y);
            lines[1] = sf::Vector2f(x + width / 2, y);
            lines[2] = sf::Vector2f(x + width / 2, y + length);
            lines[3] = sf::Vector2f(x - width / 2, y + length);
            lines[4] = sf::Vector2f(x - width / 2, y);
        }

        for (int i = 0; i <= 4; i++)
        {
            lines[i].color = color;
        }

        window->draw(lines);
    }
};