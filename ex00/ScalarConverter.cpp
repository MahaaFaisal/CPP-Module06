#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter &other) {(void)other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs) {(void) rhs; return (*this);}
ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::literalToChar(double scalar)
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

void		ScalarConverter::literalToInt(double scalar)
{
	Utils::printMsg("int: ", "magenta");
	std::cout << (int)scalar << std::endl;
}

void	ScalarConverter::literalToFloat(double scalar)
{
	Utils::printMsg("float: ", "magenta");
	std::cout << scalar << std::endl;
}

void	ScalarConverter::literalToDouble( double scalar)
{
	Utils::printMsg("double: ", "magenta");
		std::cout << scalar << std::endl;	
}

void ScalarConverter::convert(std::string str)
{
	char *rest;
	double scalar = strtod(str.c_str(), &rest);
	if (!*rest || strIsEmpty(rest))
	{
		ScalarConverter::literalToChar(scalar);
		ScalarConverter::literalToInt(scalar);
		ScalarConverter::literalToDouble(scalar);
		ScalarConverter::literalToFloat(scalar);
	}
	else
	{
		std::cout << scalar << std::endl;
		Utils::printErr("Invalid literal");
	}
}