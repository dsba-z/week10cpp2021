#include "polarcoordinate.h"
#include <cmath>

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



PolarCoordinate PolarCoordinate::cartesianToPolar(double x, double y)
{
    double r = std::sqrt(x*x + y*y);
    double a = std::atan2(y, x);
    return PolarCoordinate(r, a);
}


PolarCoordinate& PolarCoordinate::operator+=(const PolarCoordinate& b)
{
    double x = getX();
    double y = getY();
    double bx = b.getX();
    double by = b.getY();
    
    double resultX = x + bx;
    double resultY = y + by;
    
    
    PolarCoordinate result = cartesianToPolar(resultX, resultY);
    radius = result.radius;
    angle = result.angle;

    return *this;
}

PolarCoordinate PolarCoordinate::operator+(const PolarCoordinate& b) const
{
    PolarCoordinate copy(radius, angle);
    copy += b;
    return copy;
}
