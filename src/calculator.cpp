#include <calculator.h>

/**
 * @brief      Constructor
 *
 * @tparam     T     template class.
 */
template <typename T>
pp::Calculator<T>::Calculator(){
    std::cout << "Class instantiated." << std::endl;    
}

/**
 * @brief      Perform additions.
 *
 * @param[in]  a     parameter_1
 * @param[in]  b     parameter_2
 *
 * @tparam     T     template class.
 *
 * @return     sum of `a` and `b`.
 */
template <typename T>
T pp::Calculator<T>::add(T a, T b){
    return a + b;    
}

/**
 * @brief      Performs substraction.
 *
 * @param[in]  a     parameter_1
 * @param[in]  b     parameter_2
 *
 * @tparam     T     template class.
 *
 * @return     multiplication of `a` and `b`.
 */
template <typename T>
T pp::Calculator<T>::subtract(T a, T b){
	return a - b;
}

/**
 * @brief      Performs multiplication.
 *
 * @param[in]  a     parameter_1
 * @param[in]  b     parameter_2
 *
 * @tparam     T     template class.
 *
 * @return     multiplication of `a` and `b`.
 */
template <typename T>
T pp::Calculator<T>::mul(T a, T b){
	return a * b;
}

/**
 * @brief      Performs division.
 *
 * @param[in]  a     parameter_1
 * @param[in]  b     parameter_2
 *
 * @tparam     T     template class.
 *
 * @return     division of `a` and `b`.
 */
template <typename T>
T pp::Calculator<T>::divide(T a, T b){
	return a / b;
}

/*
Added explicit instantiation
Sort of a hack
http://stackoverflow.com/questions/2351148/explicit-instantiation-when-is-it-used
http://www.drdobbs.com/moving-templates-out-of-header-files/184403420
*/
template class pp::Calculator<int>;
template class pp::Calculator<double>;