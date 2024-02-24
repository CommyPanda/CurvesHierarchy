#pragma once
#include "coordinates.h"
#include "curves.h"
#include <cmath>
#include <utility>
#include <vector>
#include <cstddef>
#include <iostream>

class Circles : public Curves
{

    private:
        float _radius;

    public:
        Circles(float radius);

        float getRadius();

        float getCoordX(float radian) override;
        float getCoordY(float radian) override;
        float getCoordZ(float radian) override;

        float getDerivX(float radian) override;
        float getDerivY(float radian) override;
        float getDerivZ(float radian) override;
};