#ifndef LIST_H
#define LIST_H
#include <vector>

class List
{
    static const unsigned long MAX_CAPACITY = 10;
    int c[MAX_CAPACITY];
    int n;
    double a;
public:
    List(const std::vector<int>& v);
    
    
    void add(int x);
};

#endif // LIST_H
