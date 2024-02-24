#pragma once

class Coordinates
{
    private:
        float _x;
        float _y;
        float _z;
    public:
        Coordinates();
        Coordinates(float x, float y, float z);
        void setX(float x);
        void setY(float y);
        void setZ(float z);

        float getX();
        float getY();
        float getZ();
};