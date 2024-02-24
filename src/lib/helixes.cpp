#include "headers/helixes.h"

Helixes::Helixes(float radius, float zStepSize)
{
    _radius = radius;
    _zStepSize = zStepSize;
};

float Helixes::getCoordX(float radian)
{
    return std::cos(radian) * _radius;
}
float Helixes::getCoordY(float radian)
{
    return std::sin(radian) * _radius;;
}
float Helixes::getCoordZ(float radian)
{
    return _zStepSize * radian;
}

float Helixes::getDerivX(float radian)
{
    return -1 * sin(radian) * _radius;;
}
float Helixes::getDerivY(float radian)
{
    return cos(radian) * _radius;;
}
float Helixes::getDerivZ(float radian)
{
    return _zStepSize;
}
