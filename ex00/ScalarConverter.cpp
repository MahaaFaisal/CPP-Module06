#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter &other) {(void)other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs) {(void) rhs; return (*this);}
ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::charToChar(char c)
{
	// fix with try catch
	Utils::printMsg("char: ", "magenta");
	std::cout << c << std::endl;

}

void		ScalarConverter::charToInt(char c)
{
	Utils::printMsg("int: ", "magenta");
	std::cout << (int)c << std::endl;
}

void	ScalarConverter::charToFloat(char c)
{
	Utils::printMsg("float: ", "magenta");
	std::cout << float(c) << std::endl;
}

void	ScalarConverter::charToDouble( char c)
{
	Utils::printMsg("double: ", "magenta");
		std::cout << double(c) << std::endl;	
}

void	ScalarConverter::numToChar(double scalar)
{
	// fix with try catch
	Utils::printMsg("char: ", "magenta");
	if (scalar > 255 || scalar != (int)scalar)
		std::cout << "invalid" << std::endl;
	else if (scalar < 32 || scalar == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << char(scalar) << std::endl;

}

void		ScalarConverter::numToInt(double scalar)
{
	Utils::printMsg("int: ", "magenta");
	std::cout << (int)scalar << std::endl;
}

void	ScalarConverter::numToFloat(double scalar)
{
	Utils::printMsg("float: ", "magenta");
	std::cout << scalar << std::endl;
}

void	ScalarConverter::numToDouble( double scalar)
{
	Utils::printMsg("double: ", "magenta");
		std::cout << scalar << std::endl;	
}

void ScalarConverter::convert(std::string str)
{
	char *rest;
	double scalar = strtod(str.c_str(), &rest);
	// we might need to handle char manually
	if (strlen(str.c_str()) == 1 && !isdigit(str[0]))
	{
		ScalarConverter::charToChar(str[0]);
		ScalarConverter::charToInt(str[0]);
		ScalarConverter::charToDouble(str[0]);
		ScalarConverter::charToFloat(str[0]);
	}
	else if (!*rest || strIsEmpty(rest))
	{
		ScalarConverter::numToChar(scalar);
		ScalarConverter::numToInt(scalar);
		ScalarConverter::numToDouble(scalar);
		ScalarConverter::numToFloat(scalar);
	}
	else
	{
		std::cout << scalar << std::endl;
		Utils::printErr("Invalid literal");
	}
}