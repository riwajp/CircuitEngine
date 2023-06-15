#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include "./Pointpair.cpp"

class Line : public sf::RectangleShape
{

public:
    Line(){};
    void setPoints(int x1, int y1, int x2, int y2)
    {

        setSize(sf::Vector2f(sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)), 3));
        setPosition(x1, y1);
        setFillColor(sf::Color::Red);
        float m = (float)(y2 - y1) / (x2 - x1);

        float theta = atan(m) * 180 / 3.1415;
        std::cout << theta << std::endl;
        rotate(theta);
    };

    void fromPointpair(Pointpair pointpair)
    {

        setPoints(pointpair.x1, pointpair.y1, pointpair.x2, pointpair.y2);
    }
};