#include "./GATE.cpp"
#pragma once

class AND : public GATE

{

public:
    void setOutput()
    {
        output.state = true;
        for (int i = 0; i < number_of_inputs; i++)
        {
            if (!inputs[i].state)
            {
                output.state = false;

                return;
            }
        }
    }
};