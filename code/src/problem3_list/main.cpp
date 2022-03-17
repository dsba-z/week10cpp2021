#include<iostream>
#include<stdexcept>
#include "list.h"
int main()
{
    
    try {
        
        List a({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1});
        List b({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1});
        
        
    }  catch (const std::range_error& e) {
        std::cout << "range error\n" << e.what() << std::endl;
    }  catch (const std::out_of_range& e) {
        std::cout << "out of range\n"  << e.what() << std::endl;
    }  catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }  catch (...) {
        std::cout << "another error" << std::endl;
    }
    
    
    return 0;
}
