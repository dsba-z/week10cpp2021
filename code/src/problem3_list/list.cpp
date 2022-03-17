#include "list.h"
#include <vector>
#include <stdexcept>

List::List(const std::vector<int>& v)
{
    
    // copy elements
    
    if (v.size() > List::MAX_CAPACITY)
    {
        throw std::range_error("Vector has too many elements");
    }
}
