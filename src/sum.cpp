#include <sum.h>

template <typename T>
pp::Sum<T>::Sum(){
    std::cout << "Class instantiated." << std::endl;    
}

template <typename T>
T pp::Sum<T>::add(T a, T b){
    return a + b;    
}

/*
Added explicit instantiation
Sort of a hack
http://stackoverflow.com/questions/2351148/explicit-instantiation-when-is-it-used
http://www.drdobbs.com/moving-templates-out-of-header-files/184403420
*/
template class pp::Sum<int>;
template class pp::Sum<double>;