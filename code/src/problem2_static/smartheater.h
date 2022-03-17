#ifndef SMARTHEATER_H
#define SMARTHEATER_H


class SmartHeater
{

public:
    static double externalTemp;
    double idealTemp = 23.0;
    double increaseFactor;
    SmartHeater();
    SmartHeater(double ideal) : idealTemp(ideal){};
    
    
};

#endif // SMARTHEATER_H
