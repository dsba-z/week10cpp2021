#include <vector>
#include <stdexcept>

#include "list.h"

List::List(const std::vector<int>& v)
{
    
    // copy elements
    if (List::MAX_CAPACITY < v.size())
    {
        throw std::out_of_range("Vector has too many elements");
    }
}
