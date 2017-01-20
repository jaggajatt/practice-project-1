#include <sum.h>

template <typename T>
pp::Sum<T>::Sum(){
    std::cout << "Hello World" << std::endl;    
}

template <typename T>
T pp::Sum<T>::add(T a, T b){
    return a + b;    
}
