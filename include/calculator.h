#ifndef PRACTICEPROJECT1_CALCULATOR_H
#define PRACTICEPROJECT1_CALCULATOR_H

#include <iostream>

/**
 * pp is `practice-project-1` workspace.
 */
namespace pp{

/**
 * @brief      Class for calculator.
 *
 * @tparam     T     Template Class.
 */
template <typename T>
class Calculator{
    public:
    	/**
		 * @brief      Constructor
		 *
		 * @tparam     T     template class.
		 */
        Calculator();
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
        T add(T a, T b);
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
        T subtract(T a, T b);
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
         T mul(T a, T b);
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
        T divide(T a, T b);
};

}

#endif // PRACTICEPROJECT1_CALCULATOR_H
