#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <string>
# include <limits>
# include <climits>
# include <math.h>
# include <float.h>

#include "helpers.hpp"
# include "Utils.hpp"

class ScalarConverter
{
	protected:
		~ScalarConverter(); // protected to limit instances

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		ScalarConverter &operator=(ScalarConverter &rhs);

		static void	convert(std::string str);
};
#endif
