#ifndef POLARCOORDINATE_H
#define POLARCOORDINATE_H


class PolarCoordinate
{
    double radius;
    double angle;

public:
    PolarCoordinate();
    PolarCoordinate(double radius, double angle);
    PolarCoordinate(double radius);
    
    double getRadius() const {return radius;}
    double getAngle() const {return angle;}
    
    static PolarCoordinate cartesianToPolar(double x, double y);
    
    void test();
    
    
    PolarCoordinate operator+(const PolarCoordinate& b) const;
    PolarCoordinate operator-(const PolarCoordinate& b) const;
    PolarCoordinate& operator+=(const PolarCoordinate& b);
    PolarCoordinate& operator-=(const PolarCoordinate& b);

    PolarCoordinate operator*(double b) const;
    PolarCoordinate operator/(double b) const;
    PolarCoordinate& operator*=(double b);
    PolarCoordinate& operator/=(double b);
};

#endif // POLARCOORDINATE_H
