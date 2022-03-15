#include "polarcoordinate.h"

PolarCoordinate::PolarCoordinate()
    : radius(0), angle(0)
{
//    radius = 0;
//    angle = 0;
}


PolarCoordinate::PolarCoordinate(double radiusInput)
    :PolarCoordinate()
{
    radius = radiusInput;
//    angle = 0;
}


void PolarCoordinate::test()
{
    PolarCoordinate a;
    *this = a;
}
