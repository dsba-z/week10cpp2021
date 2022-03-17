#ifndef POLARCOORDINATE_H
#define POLARCOORDINATE_H


class PolarCoordinate
{
    double radius;
    double angle;

public:
    PolarCoordinate(double radius, double angle);
    
    double getRadius() const {return radius;}
    double getAngle() const {return angle;}
    
    
    static PolarCoordinate toPolar(double x, double y);
    double getX() const;
    double getY() const;
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
