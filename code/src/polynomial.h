#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <vector>

class Polynomial
{
    std::vector<double> coefficients;
public:
    Polynomial(const std::vector<double>& coeffList);
};

#endif // POLYNOMIAL_H
