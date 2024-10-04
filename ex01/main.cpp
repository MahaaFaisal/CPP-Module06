#include "Serializer.hpp"
#include "Utils.hpp"

int main()
{
	
	Data *data = new Data (5);

	Utils::printMsg ("original object value: ", "magenta");
	std::cout << data->getId() << std::endl;

	uintptr_t x = Serializer::serialize(data);
	Utils::printMsg ("serialized pointer: ", "magenta");
	std::cout << x << std::endl;

	Data *deserialized = Serializer::deserialize(x);
	Utils::printMsg ("deserialized object value: ", "magenta");
	std::cout << deserialized->getId() << std::endl;

	delete data ;
}