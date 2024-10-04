#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "functions.hpp"
#include "Utils.hpp"

int main()
{
	
	Utils::printMsg("--- A TEST ---\n", "green");
	Base *baseA = new A();
	Utils::printMsg("identify A pointer: ", "magenta");
	identify(baseA);
	Base &aRef = *baseA;
	Utils::printMsg("identify A reference: ", "magenta");
	identify(aRef);
	std::cout << '\n';


	Utils::printMsg("--- B TEST ---\n", "green");
	Base *baseB = new B();
	Utils::printMsg("identify B pointer: ", "magenta");
	identify(baseB);
	Base &bRef = *baseB;
	Utils::printMsg("identify B reference: ", "magenta");
	identify(bRef);
	std::cout << '\n';

	Utils::printMsg("--- C TEST ---\n", "green");
	Base *baseC = new C();
	Utils::printMsg("identify C pointer: ", "magenta");
	identify(baseC);
	Base &cRef = *baseC;
	Utils::printMsg("identify C reference: ", "magenta");
	identify(cRef);
	std::cout << '\n';

	Utils::printMsg("--- BASE TEST ---\n", "green");
	Base *base = new Base();
	Utils::printMsg("identify C pointer: ", "magenta");
	identify(base);
	Base &ref = *base;
	Utils::printMsg("identify C reference: ", "magenta");
	identify(ref);
	std::cout << '\n';

	delete baseA;
	delete baseB;
	delete baseC;
	delete base;
}