#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter &other) {(void)other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs) {(void) rhs; return (*this);}
ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::charToChar(char c)
{
	Utils::printMsg("char: ", "magenta");
	std::cout << c << std::endl;
}

void	ScalarConverter::charToInt(char c)
{
	Utils::printMsg("int: ", "magenta");
	std::cout << static_cast<int>(c) << std::endl;
}

void	ScalarConverter::charToFloat(char c)
{
	Utils::printMsg("float: ", "magenta");
	std::cout << static_cast<float>(c) << ".0f\n";
}

void	ScalarConverter::charToDouble( char c)
{
	Utils::printMsg("double: ", "magenta");
		std::cout << static_cast<double>(c) << ".0\n";	
}

void	ScalarConverter::numToChar(double scalar)
{
	Utils::printMsg("char: ", "magenta");
	if (scalar < CHAR_MIN || scalar > CHAR_MAX || scalar != static_cast<int>(scalar))
		std::cout << "impossible" << std::endl;
	else if (scalar < 32 || scalar == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(scalar) << std::endl;

}

void	ScalarConverter::numToInt(double scalar)
{
	Utils::printMsg("int: ", "magenta");
	if (scalar < INT_MIN || scalar > INT_MAX || isnan(scalar))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(scalar) << std::endl;
}

void	ScalarConverter::numToFloat(double scalar)
{
	Utils::printMsg("float: ", "magenta");
	if ((scalar < -std::numeric_limits<float>::max() 
		|| scalar > std::numeric_limits<float>::max())
		&& !isinf(scalar))
		std::cout << "impossible" << std::endl;
	else
	std::cout << static_cast<float>(scalar) << ((scalar == static_cast<int>(scalar)) ? ".0f\n" : "f\n");
}

void	ScalarConverter::numToDouble(double scalar)
{
	Utils::printMsg("double: ", "magenta");
	std::cout << scalar << ((scalar == static_cast<int>(scalar)) ? ".0\n" : "\n");	
}

void ScalarConverter::convert(std::string str)
{
	char *rest;
	double scalar = strtod(str.c_str(), &rest);

	if (strlen(str.c_str()) == 1 && !isdigit(str[0]))
	{
		ScalarConverter::charToChar(str[0]);
		ScalarConverter::charToInt(str[0]);
		ScalarConverter::charToDouble(str[0]);
		ScalarConverter::charToFloat(str[0]);
	}
	else if (!*rest || strIsEmpty(rest) || (*rest == 'f' && strIsEmpty(rest + 1)))
	{
		ScalarConverter::numToChar(scalar);
		ScalarConverter::numToInt(scalar);
		ScalarConverter::numToDouble(scalar);
		ScalarConverter::numToFloat(scalar);
	}
	else
		Utils::printErr("Invalid literal");
}