#include "headers/ellipses.h"


Ellipses::Ellipses(float xAxisCoeff, float yAxisCoeff)
{
    _xAxisCoeff = xAxisCoeff;
    _yAxisCoeff = yAxisCoeff;
};

float Ellipses::getCoordX(float radian)
{
    return std::cos(radian) * _xAxisCoeff;
}
float Ellipses::getCoordY(float radian)
{
    return std::sin(radian) * _yAxisCoeff;
}
float Ellipses::getCoordZ(float radian)
{
    return 0;
}

float Ellipses::getDerivX(float radian)
{
    return -1 * sin(radian) * _xAxisCoeff;
}
float Ellipses::getDerivY(float radian)
{
    return cos(radian) * _yAxisCoeff;
}
float Ellipses::getDerivZ(float radian)
{
    return 0;
}

