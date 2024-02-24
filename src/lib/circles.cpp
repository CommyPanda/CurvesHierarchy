#include "headers/circles.h"



Circles::Circles(float radius)
{
    _radius=radius;
};

float Circles::getRadius()
{
    return _radius;
}

float Circles::getCoordX(float radian)
{
    return std::cos(radian) * _radius;
}
float Circles::getCoordY(float radian)
{
    return std::sin(radian) * _radius;;
}
float Circles::getCoordZ(float radian)
{
    return 0;
}

float Circles::getDerivX(float radian)
{
    return -1 * sin(radian) * _radius;;
}
float Circles::getDerivY(float radian)
{
    return cos(radian) * _radius;;
}
float Circles::getDerivZ(float radian)
{
    return 0;
}
