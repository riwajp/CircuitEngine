#include "./GATE.cpp"
#pragma once

class OR : public GATE

{

public:
    void setOutput()
    {
        output.output = false;
        for (int i = 0; i < number_of_inputs; i++)
        {
            if (inputs[i].input)
            {
                output.output = true;

                return;
            }
        }
    }
};