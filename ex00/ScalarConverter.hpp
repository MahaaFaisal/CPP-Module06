#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <string>

#include "helpers.hpp"
# include "Utils.hpp"

class ScalarConverter
{
	private:
		static void	literalToChar(double scalar);
		static void	literalToInt(double scalar);
		static void	literalToFloat(double scalar);
		static void	literalToDouble(double scalar);

	protected:
		~ScalarConverter(); // protected to limit instances

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		ScalarConverter &operator=(ScalarConverter &rhs);

		static void	convert(std::string str);
};
#endif
