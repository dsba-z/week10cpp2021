#include "polarcoordinate.h"
#include <utility>
#include <cmath>

PolarCoordinate::PolarCoordinate(double r, double a)
{
    radius = r;
    angle = a;
}

double PolarCoordinate::getX() const
{
    return radius * std::cos(angle);
}


double PolarCoordinate::getY() const
{
    return radius * std::sin(angle);
}


PolarCoordinate PolarCoordinate::cartesianToPolar(double x, double y) const
{
    return PolarCoordinate(std::sqrt(x*x + y*y), std::atan2(y, x));
}


PolarCoordinate PolarCoordinate::operator+(const PolarCoordinate& b) const
{
    radius;
    angle;
    
    double x;
    double y;
    // option 2
    x = getX();
    y = getY();
    
    
    double bx = b.getX();
    double by = b.getY();
    
    
    double resultX = x + bx;
    double resultY = y + by;
    
//    PolarCoordinate resultCreation(radius, angle); // inside cartesianToPolar
    PolarCoordinate result = cartesianToPolar(resultX, resultY);
    double resultRadius;
    double resultAngle;
    
    
    return PolarCoordinate(resultRadius, resultAngle);
    
}

PolarCoordinate& PolarCoordinate::operator+=(const PolarCoordinate& b)
{
    *this = *this + b;
    return *this;
}

