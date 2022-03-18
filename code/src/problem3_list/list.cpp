#include "list.h"
#include <vector>
#include <stdexcept>

List::List(const std::vector<int>& v)
{
    
    
    // copy all elements of vector into c
    // if vector is too large, copy MAX_CAPACITY elementss
    
    if (v.size() > MAX_CAPACITY)
    {
        throw std::length_error("Vector has too many elements");
    }
}


void List::add(int x)
{
    int numberOfElements = n;
    
}
