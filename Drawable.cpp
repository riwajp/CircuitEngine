#include <iostream>

#include <fstream>
#include "./Line.cpp"

class Drawable
{

    Line *lines;
    int last_line_index = -1;

public:
    void draw(sf::RenderWindow *window)
    {
        for (int i = 0; i <= last_line_index; i++)
        {

            window->draw(lines[i]);
        }
    }

    void setNumberOfLines(int n)
    {
        lines = new Line[n];
    }

    void addLine()
    {
    }

    void addLine(Line line)
    {

        lines[++last_line_index] = line;
    }
};