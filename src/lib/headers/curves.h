#pragma once


class Curves
{
    public:

      virtual float getCoordX(float radian) = 0;
      virtual float getCoordY(float radian) = 0;
      virtual float getCoordZ(float radian) = 0;

      virtual float getDerivX(float radian) = 0;
      virtual float getDerivY(float radian) = 0;
      virtual float getDerivZ(float radian) = 0;
};