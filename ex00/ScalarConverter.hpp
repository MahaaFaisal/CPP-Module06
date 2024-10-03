#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <string>
# include <climits>
# include <math.h>
# include <float.h>

#include "helpers.hpp"
# include "Utils.hpp"

class ScalarConverter
{
	private:
		static void	charToChar(char c);
		static void	charToInt(char c);
		static void	charToFloat(char c);
		static void	charToDouble(char c);

		static void	numToChar(double scalar);
		static void	numToInt(double scalar);
		static void	numToFloat(double scalar);
		static void	numToDouble(double scalar);

	protected:
		~ScalarConverter(); // protected to limit instances

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		ScalarConverter &operator=(ScalarConverter &rhs);

		static void	convert(std::string str);
};
#endif
