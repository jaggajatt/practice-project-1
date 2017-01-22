#include <calculator.h>

template <typename T>
pp::Calculator<T>::Calculator(){
    std::cout << "Class instantiated." << std::endl;    
}

template <typename T>
T pp::Calculator<T>::add(T a, T b){
    return a + b;    
}

/*
Added explicit instantiation
Sort of a hack
http://stackoverflow.com/questions/2351148/explicit-instantiation-when-is-it-used
http://www.drdobbs.com/moving-templates-out-of-header-files/184403420
*/
template class pp::Calculator<int>;
template class pp::Calculator<double>;