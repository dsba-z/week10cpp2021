#include<iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <stdexcept>

#include "list.h"


int main()
{

    try {
        List({1,4,5,5,5,6,6,6,6,5,6,6,6,5,6,6,6,5});
        
    }  catch (const std::range_error& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
