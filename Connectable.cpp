#include <SFML/Graphics.hpp>

class Connectable
{

public:
    float x, y;

    void connect(Connectable component)
    {
        float nx = component.x;
        float ny = component.y;
    }
};