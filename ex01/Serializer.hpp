#ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__

# include <stdint.h>
# include "Data.hpp"
class Serializer
{

	protected:
		~Serializer(); // protected to limit instances

	public:
		Serializer();
		Serializer(Serializer &other);
		Serializer &operator=(Serializer &rhs);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
#endif