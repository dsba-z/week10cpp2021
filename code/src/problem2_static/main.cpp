#include<iostream>
#include<map>
#include<sstream>
#include<fstream>
#include<string>
#include "smartheater.h"


void fillMapWithData(std::istream& in, std::map<int, float>& wc)
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
    std::map<int, float> weatherContext;
    
    std::string fileName = "../../data/murmansk.csv";
    std::ifstream inputFile(fileName);
    
    fillMapWithData(inputFile, weatherContext);
    
    SmartHeater sh1;
    SmartHeater sh2(20);
    
    
    for (const std::pair<int, float>& kv: weatherContext)
    {
        SmartHeater::externalTemp = kv.second;
        sh1.recalculate();
        sh2.recalculate();
        
        std::cout  << "SmartHeater1 " << std::endl;
        std::cout  << "Ideal:  " << sh1.idealTemp << std::endl;
        std::cout  << "External:  " << SmartHeater::externalTemp << std::endl;
        std::cout  << "Increase:  " << sh1.increaseFactor << std::endl;
    }
    
    
    
    return 0;
}
