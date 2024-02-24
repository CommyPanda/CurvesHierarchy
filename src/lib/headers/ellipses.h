#pragma once
#include "coordinates.h"
#include "curves.h"
#include <cmath>
#include <vector>
#include <cstddef>

class Ellipses : public Curves
{
    private:
        float _xAxisCoeff;
        float _yAxisCoeff;

    public:
        Ellipses(float xAxisCoeff, float yAxisCoeff);

        float getCoordX(float radian) override;
        float getCoordY(float radian) override;
        float getCoordZ(float radian) override;

        float getDerivX(float radian) override;
        float getDerivY(float radian) override;
        float getDerivZ(float radian) override;
};