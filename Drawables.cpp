#include <SFML/Graphics.hpp>
#include <iostream>

#include <fstream>

#include "./Drawable.cpp"

class Drawables
{

    Drawable *drawables = new Drawable[5];

public:
    Drawables()
    {
        // std::cout << "here";
    }
    int last_drawable_index = -1;
    void scan()
    {

        std::ifstream file("./triangle.dr");
        std::string ln;
        std::string buffer;
        int number_of_lines = 0;
        Drawable drawable;
        while (std::getline(file, ln))
        {

            if (ln[0] != '/' and ln != "")
            {

                // number_of_lines++;
                //  drawable.setNumberOfLines(number_of_lines);

                Pointpair pointpair;
                Line line;
                pointpair.points(ln);
                line.fromPointpair(pointpair);
                drawable.addLine(line);
            }
        }
        drawables[++last_drawable_index] = drawable;

        file.close();
    }

    void draw(sf::RenderWindow *window)
    {
        // Line line;
        // line.setPoints(20, 10, 100, 2);

        // window->draw(line);
        for (int i = 0; i <= last_drawable_index; i++)
        {

            drawables[i].draw(window);
        }
    }
};