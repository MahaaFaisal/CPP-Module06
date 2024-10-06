#include "Serializer.hpp"
#include "Utils.hpp"

int main()
{
	
	Data *data = new Data (5);

	Utils::printMsg ("original pointer: ", "green");
	std::cout << data << std::endl;

	Utils::printMsg ("original object value: ", "white");
	std::cout << data->getId() << std::endl;

	uintptr_t x = Serializer::serialize(data);
	Utils::printMsg ("serialized pointer: ", "green");
	std::cout << x << std::endl;

	Data *deserialized = Serializer::deserialize(x);
	Utils::printMsg ("deserialized pointer: ", "green");
	std::cout << deserialized << std::endl;

	Utils::printMsg ("deserialized object value: ", "white");
	std::cout << deserialized->getId() << std::endl;


	delete data ;
}