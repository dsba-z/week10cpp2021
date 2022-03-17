#include "polarcoordinate.h"
#include <cmath>

PolarCoordinate::PolarCoordinate(double radius, double angle)
    :radius(radius), angle(angle)
{
    
}


PolarCoordinate PolarCoordinate::toPolar(double x, double y)
{
    double radius = std::sqrt(x*x + y*y);
    double angle = std::atan2(y, x);
    return PolarCoordinate(radius, angle);
}


double PolarCoordinate::getX() const
{
    return radius * std::cos(angle);
}


double PolarCoordinate::getY() const
{
    return radius * std::sin(angle);
}


PolarCoordinate PolarCoordinate::operator+(const PolarCoordinate& b) const
{
    double x = getX();
    double y = getY();
    
    double bx = b.getX();
    double by = b.getY();
    
    return toPolar(x+bx, y+by);
}


PolarCoordinate PolarCoordinate::operator-(const PolarCoordinate& b) const
{
    double x = getX();
    double y = getY();
    
    double bx = b.getX();
    double by = b.getY();
    
    return toPolar(x-bx, y-by);
}

PolarCoordinate& PolarCoordinate::operator+=(const PolarCoordinate& b)
{
    *this = *this + b;
    return *this;
}

PolarCoordinate& PolarCoordinate::operator-=(const PolarCoordinate& b)
{
    *this = *this - b;
    return *this;
}

PolarCoordinate PolarCoordinate::operator*(double b) const
{
    return PolarCoordinate(radius*b, angle);
}


PolarCoordinate PolarCoordinate::operator/(double b) const
{
    return PolarCoordinate(radius/b, angle);
}

PolarCoordinate& PolarCoordinate::operator*=(double b)
{
    *this = *this * b;
    return *this;
}

PolarCoordinate& PolarCoordinate::operator/=(double b)
{
    *this = *this / b;
    return *this;
}

