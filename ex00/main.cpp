
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	// ScalarConverter x; // will cause error because its uninstanciable

	for (int i = 1; i < argc; i++)
	{
		Utils::printMsg("--- Scaling ", "green");
		Utils::printMsg(argv[i], "green");
		Utils::printMsg( " ---\n", "green");
		ScalarConverter::convert(argv[i]);
		std::cout << "\n";
	}
}