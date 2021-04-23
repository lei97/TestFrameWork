#include <string>
#include <iostream>
#include "dynamicFramework.h"

int sum(int a, int b)
{
    std::cout << a << "+" << b << "=" << (a + b) << std::endl;
    return a + b;
}