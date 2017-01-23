#ifndef PRACTICEPROJECT1_CALCULATOR_H
#define PRACTICEPROJECT1_CALCULATOR_H

#include <iostream>
#include <cmath>
#include <limits>

namespace pp{
	template <typename T>
	class Calculator;

	template <typename T>
	std::ostream& operator<<(std::ostream& ostream, const pp::Calculator<T>& cal);
}

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

        /**
         * @brief      Just displays some information about the class.
         *
         * @param      ostream  The output stream
         * @param[in]  cal      The cal object
         *
         * @return     output stream.
         */
        template <typename U>
		friend std::ostream& pp::operator<<(std::ostream& ostream, const pp::Calculator<U>& cal);
};

}

#endif // PRACTICEPROJECT1_CALCULATOR_H
