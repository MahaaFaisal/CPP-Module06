#include "functions.hpp"

Base	*generate(void)
{
	srand(time(0));
	int x = rand();
	if (x % 3 == 0)
		return (new A());
	if (x % 3 == 1)
		return (new B());
	return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast <A *>(p))
		std::cout << "it is an A object pointer\n";
	else if (dynamic_cast <B *>(p))
		std::cout << "it is a B object pointer\n";
	else if (dynamic_cast <C *>(p))
		std::cout << "it is a C object pointer\n";
	else
		std::cout << "it is a base object\n";
}

void	identify(Base& p)
{
	try 
	{
		(void)dynamic_cast <A &>(p);
		std::cout << "it is an A object reference\n";
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast <B &>(p);
			std::cout << "it is a B object reference\n";
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast <C &>(p);
				std::cout << "it is a C object reference\n";
			}
		catch(const std::exception& e) { std::cout << "it is a base object reference\n"; }
		}
	}
}

