#ifndef WEATHERCONTEXT_H
#define WEATHERCONTEXT_H
#include <map>
#include <iostream>

class WeatherContext
{
public:
    std::map<int, float> w;
    WeatherContext();
    
    static void fillMapWithData(std::istream& in, WeatherContext& wc);
};


class SmartHeater
{
    double _increaseFactor;
    double _idealTemp;
public:
    static double externalTemp;
    
    SmartHeater(double ideal = 23.0) :_idealTemp(ideal){}
    
    double getIncreaseFactor() const { return _increaseFactor; }
    double getIdealTemp() const { return _idealTemp; }
    void recalculateHeating() { _increaseFactor = _idealTemp - externalTemp; }
};

#endif // WEATHERCONTEXT_H
