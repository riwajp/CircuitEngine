#include <iostream>
#pragma once

class Pointpair
{
public:
    float x1 = 0; // 0
    float x2 = 0; // 2
    float y1 = 0; // 1
    float y2 = 0; // 3

    void concat(int index, char value)
    {
        {
            if (index == 0)
            {
                x1 = x1 * 10 + (value - '0');
            }

            if (index == 1)
            {
                y1 = y1 * 10 + value - '0';
            }

            if (index == 2)
            {
                x2 = x2 * 10 + value - '0';
            }
            if (index == 3)
            {
                y2 = y2 * 10 + value - '0';
            }
        }
    }
    void points(std::string ln)
    {

        int i = 0;

        int flag = 0;

        while (ln[i] != ';')
        {

            if (ln[i] == ' ')
            {
                flag++;
            }
            else
            {
                concat(flag, ln[i]);
            }
            i++;
        }
    }
};