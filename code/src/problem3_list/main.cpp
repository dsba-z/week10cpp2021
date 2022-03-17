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
        std::cerr << e.what() << std::endl;
        std::cout << e.what()<< e.what() << std::endl;
    }  catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }  catch (...) {
        std::cerr << "some error" << std::endl;
    }
    return 0;
}
