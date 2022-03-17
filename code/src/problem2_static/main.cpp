#include <iostream>
#include <fstream>
#include <string>
#include "weathercontext.h"


double SmartHeater::externalTemp;

int main()
{
    const std::string fileName = "../../data/murmansk.csv";
    std::ifstream inputFile(fileName);
    WeatherContext weatherContext;
    WeatherContext::fillMapWithData(inputFile, weatherContext);
    for (auto kv : weatherContext.w)
    {
        std::cout << kv.first << " " << kv.second << std::endl;
    }
    
    
    SmartHeater sm1;
    SmartHeater sm2(20);
    
    for (auto kv : weatherContext.w)
    {
        SmartHeater::externalTemp = kv.second;
        sm1.recalculateHeating();
        sm2.recalculateHeating();
        std::cout << "The time is " << kv.first << " hours. Temperature is ";
        std::cout << kv.second << " degrees" << std::endl;
        std::cout << "First heater's target is " << sm1.getIdealTemp() << ". ";
        std::cout << "It need to increase the temperature by "<< sm1.getIncreaseFactor() <<" degrees." << std::endl;
        std::cout << "Second heater's target is " << sm2.getIdealTemp() << ". ";
        std::cout << "It need to increase the temperature by "<< sm2.getIncreaseFactor() <<" degrees." << std::endl;
        
    }
    
    
    
    return 0;
}
