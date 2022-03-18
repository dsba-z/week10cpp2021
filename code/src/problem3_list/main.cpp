#include<iostream>
#include<stdexcept>

#include "list.h"

int main()
{
    
    try {
        List newList({1,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3});
    }  catch (const std::length_error& e) {
        std::cout << "Length error" << std::endl;
        std::cout << e.what() << std::endl;
    }  catch (const std::exception& e) {
        
        std::cout << "Some other error" << std::endl;
        std::cout << e.what() << std::endl;
    }
    return 0;
}
