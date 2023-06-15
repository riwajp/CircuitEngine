#include <SFML/Graphics.hpp>
#include <iostream>

class Line :sf::RectangleShape{

    public:
    
    Line(int x1,int y1, int x2, int y2){
        setSize(sf::Vector2f(x2-x1,10));
        setFillColor(sf::Color::Black)
        rotate(std::atan((y2-y1)/(x2-x1)));
       

    }
}