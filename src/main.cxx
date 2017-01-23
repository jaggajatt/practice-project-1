#include <iostream>
#include <calculator.h>
#include <cstdlib>

int main(int argc, char** argv){
    using pp::Calculator;
    Calculator<int> calculator;
    srand (time(NULL));
    int a = rand() % 100, b = rand() % 100;
    std::cout << calculator << std::endl;
    std::cout << "Sum of a -> " << a << " + b -> " << b << " = " << calculator.add(a, b) << std::endl; 
    return 0;
}
