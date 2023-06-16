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
    }
    int last_drawable_index = -1;
    void scan(std::string file_name)
    {

        std::ifstream file(file_name); // file for scanning
        std::string ln;                // stores every line of the file
        int number_of_lines = 0;       // number of valid lines in the file
        Drawable drawable;             // drawable representing the dr file

        while (std::getline(file, ln))
        {

            if (ln[0] != '/' and ln != "") // if the line is valid
            {

                number_of_lines++;
            }
        }
        drawable.setNumberOfLines(number_of_lines);
        file.clear();
        file.seekg(0, std::ios::beg);

        while (std::getline(file, ln))
        {

            if (ln[0] != '/' and ln != "")
            {
                // add lines to the drawable from the file
                Pointpair pointpair;
                Line line;
                pointpair.points(ln);
                line.fromPointpair(pointpair);
                drawable.addLine(line);
            }
        }
        drawables[++last_drawable_index] = drawable; // add this drawable to the drawables array

        file.close();
    }

    void draw(sf::RenderWindow *window)
    {

        for (int i = 0; i <= last_drawable_index; i++)
        {

            drawables[i].draw(window);
        }
    }
};