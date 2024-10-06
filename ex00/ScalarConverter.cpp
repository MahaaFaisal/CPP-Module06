#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter &other) {(void)other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs) {(void) rhs; return (*this);}
ScalarConverter::~ScalarConverter(){}

void	charToChar(char c)
{
	Utils::printMsg("char: ", "magenta");
	std::cout << '\'' << c << '\'' << std::endl;
}

void	charToInt(char c)
{
	Utils::printMsg("int: ", "magenta");
	std::cout << static_cast<int>(c) << std::endl;
}

void	charToFloat(char c)
{
	Utils::printMsg("float: ", "magenta");
	std::cout << static_cast<float>(c) << ".0f\n";
}

void	charToDouble( char c)
{
	Utils::printMsg("double: ", "magenta");
		std::cout << static_cast<double>(c) << ".0\n";	
}

void	numToChar(long double scalar)
{
	Utils::printMsg("char: ", "magenta");
	if (scalar < CHAR_MIN || scalar > CHAR_MAX || scalar != static_cast<int>(scalar))
		std::cout << "impossible" << std::endl;
	else if (scalar < 32 || scalar == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(scalar) << '\'' << std::endl;

}

void	numToInt(long double scalar)
{
	Utils::printMsg("int: ", "magenta");
	if (scalar < INT_MIN || scalar > INT_MAX || isnan(scalar))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(scalar) << std::endl;
}

void	numToFloat(long double scalar)
{
	Utils::printMsg("float: ", "magenta");
	if ((scalar < -std::numeric_limits<float>::max() 
		|| scalar > std::numeric_limits<float>::max())
		&& !isinf(scalar))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(scalar) << ((scalar == static_cast<int>(scalar)) ? ".0f\n" : "f\n");
}

void	numToDouble(long double scalar)
{
	Utils::printMsg("double: ", "magenta");
	if ((scalar < -std::numeric_limits<double>::max() 
		|| scalar > std::numeric_limits<double>::max())
		&& !isinf(scalar))
		std::cout << "impossible" << std::endl;
	else
		std::cout << scalar << ((scalar == static_cast<int>(scalar)) ? ".0\n" : "\n");	
}

void ScalarConverter::convert(std::string str)
{
	char *rest;
	long double scalar = strtold(str.c_str(), &rest);

	if (strlen(str.c_str()) == 1 && !isdigit(str[0]))
	{
		charToChar(str[0]);
		charToInt(str[0]);
		charToDouble(str[0]);
		charToFloat(str[0]);
	}
	else if (!*rest || strIsEmpty(rest) || (*rest == 'f' && strIsEmpty(rest + 1)))
	{
		numToChar(scalar);
		numToInt(scalar);
		numToDouble(scalar);
		numToFloat(scalar);
	}
	else
		Utils::printErr("Invalid literal");
}