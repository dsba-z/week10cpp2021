#include <string>
#include <sstream>
#include "weathercontext.h"

WeatherContext::WeatherContext()
{
    
}


void WeatherContext::fillMapWithData(std::istream& in, WeatherContext& wc)
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
        wc.w[hour] = temperature;
    }
}
