#include "headers/coordinates.h"

Coordinates::Coordinates()
{
    _x = 0;
    _y = 0;
    _z = 0;
};

Coordinates::Coordinates(float x, float y, float z)
{
    _x = x;
    _y = y;
    _z = z;
}

void Coordinates::setX(float x)
{
    _x = x;
};
void Coordinates::setY(float y)
{
    _y = y;
};
void Coordinates::setZ(float z)
{
    _z = z;
};

float Coordinates::getX()
{
    return _x;
};
float Coordinates::getY()
{
    return _y;
};
float Coordinates::getZ()
{
    return _z;
};