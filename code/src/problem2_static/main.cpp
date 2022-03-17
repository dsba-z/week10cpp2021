#include<iostream>
#include <map>
#include <sstream>
#include <fstream>

#include "smartheater.h"

void fillMapWithData(std::istream& in, std::map<int,float>& wc)
{
    std::string line;
    // skip header
    std::getline(in, line);
    while (std::getline(in, line))
    {
        std::stringstream sstr(line);
        std::string buffer;
        std::getline(sstr, buffer, ':');
        int hour = std::stoi(buffer);
        std::getline(sstr, buffer, ',');
        std::getline(sstr, buffer);
        float temperature = std::stoi(buffer);
        wc[hour] = temperature;
    }
}


double SmartHeater::externalTemp;

int main()
{
    std::map<int,float> weatherContext;
    
    std::ifstream inputFile("../../data/murmansk.csv");
    
    fillMapWithData(inputFile, weatherContext);
    
    for (auto kv : weatherContext)
    {
        std::cout << kv.first << " " << kv.second << std::endl;
    }
    
    
    SmartHeater sh1;
    SmartHeater sh2(20);
    
    for (auto kv : weatherContext)
    {
        SmartHeater::externalTemp = kv.second;
        sh1.increaseFactor = sh1.idealTemp - SmartHeater::externalTemp;
        sh2.increaseFactor = sh2.idealTemp - SmartHeater::externalTemp;
        std::cout << "First heater increases by " << sh1.increaseFactor << std::endl;
        std::cout << "Second heater increases by " << sh2.increaseFactor << std::endl;
    }
    
    SmartHeater::externalTemp = 20;
    
    
    
    return 0;
}
