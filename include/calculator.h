#ifndef PRACTICEPROJECT1_CALCULATOR_H
#define PRACTICEPROJECT1_CALCULATOR_H

#include <iostream>

namespace pp{

template <typename T>
class Calculator{
    public:
        Calculator();
        T add(T a, T b);
};

}

#endif // PRACTICEPROJECT1_CALCULATOR_H
