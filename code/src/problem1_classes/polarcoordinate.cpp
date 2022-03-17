//#include "polarcoordinate.h"
//#include <utility>
//#include <cmath>

//PolarCoordinate::PolarCoordinate()
//    : radius(0), angle(0)
//{
////    radius = 0;
////    angle = 0;
//}


//PolarCoordinate::PolarCoordinate(double radiusInput)
//    :PolarCoordinate()
//{
//    radius = radiusInput;
////    angle = 0;
//}


//void PolarCoordinate::test()
//{
//    PolarCoordinate a;
//    *this = a;
//}


//PolarCoordinate PolarCoordinate::cartesianToPolar(double x, double y)
//{
//    PolarCoordinate result(std::sqrt(x*x + y*y), std::atan2(y,x));
//    return result;
//}

//PolarCoordinate PolarCoordinate::operator+(const PolarCoordinate& b) const
//{
//    // convert to cartesian
//    double x;
//    double y;
//    double bx;
//    double by;
    
//    // option 1
//    x = getX();
//    y = getY();
    
//    bx = b.getX();
//    by = b.getY();
    
    
//    // option 2
//    toCartesianByReference(x, y);
//    b.toCartesianByReference(bx, by);
    
    
//    // option 3
//    std::pair<double, double> cartPair = toCartesianPair();
//    std::pair<double, double> cartPairB = b.toCartesianPair();
    
//    double resultX = x + bx;
//    double resultY = y + by;
    
//    PolarCoordinate newObject(radius, angle); // make new variable like this
//    PolarCoordinate result = cartesianToPolar(resultX, resultY);
    
//    return result;
//}
