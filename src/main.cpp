#include <iostream>
#include "sum.cpp"
#include <cstdlib>

int main(int argc, char** argv){
    using pp::Sum;
    Sum<int> sum;
    srand (time(NULL));
    int a = rand() % 100, b = rand() % 100;
    std::cout << "Sum of a -> " << a << " + b -> " << b << " = " << sum.add(a, b) << std::endl; 
    return 0;
}
