#include "polarcoordinate.h"
#include <utility>

PolarCoordinate::PolarCoordinate(double r, double a)
{
    radius = r;
    angle = a;
}


PolarCoordinate PolarCoordinate::operator+(const PolarCoordinate& b) const
{
    radius;
    angle;
    
    double x;
    double y;
    
    
    // option 1
    toCartesian(x, y); // by reference
    
    
    // option 2
    x = getX();
    y = getY();
    
    // option 3
    std::pair<double, double> cartesian = toCartesianPair();
    
    
    b.radius;
    b.angle;
    
    double bx = b.getX();
    double by = b.getY();
    
    
    double resultX = x + bx;
    double resultY = y + by;
    
//    PolarCoordinate resultCreation(radius, angle); // inside cartesianToPolar
    PolarCoordinate result = cartesianToPolar(resultX, resultY);
    
    return result;
    
}

PolarCoordinate& PolarCoordinate::operator+=(const PolarCoordinate& b)
{
    *this = *this + b;
}

