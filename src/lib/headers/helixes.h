#pragma once

#include "curves.h"
#include <cmath>
#include <vector>
#include <cstddef>

class Helixes : public Curves
{

    private:
        float _radius;
        float _zStepSize;

    public:
        Helixes(float radius, float zStepSize);

        float getCoordX(float radian) override;
        float getCoordY(float radian) override;
        float getCoordZ(float radian) override;

        float getDerivX(float radian) override;
        float getDerivY(float radian) override;
        float getDerivZ(float radian) override;    
};