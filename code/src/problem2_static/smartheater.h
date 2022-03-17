#ifndef SMARTHEATER_H
#define SMARTHEATER_H


class SmartHeater
{
    static double externalTemp;
    double idealTemp = 23.0;
    double increaseFactor;
public:
    SmartHeater();
};

#endif // SMARTHEATER_H
