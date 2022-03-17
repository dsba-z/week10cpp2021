#ifndef SMARTHEATER_H
#define SMARTHEATER_H


class SmartHeater
{
public:
    static double externalTemp;
    double idealTemp;
    double increaseFactor;

    SmartHeater(double ideal = 23) 
        :idealTemp(ideal)
    {}
    
    void recalculate() 
    {
        increaseFactor = idealTemp - externalTemp; 
    }
};

#endif // SMARTHEATER_H
