#include "Data.hpp"

Data::Data() {}
Data::Data(int id) : _id(id){}
Data::Data(Data &other) : _id(other._id){}
Data &Data::operator=(Data &rhs) { this->_id = rhs._id; return (*this);}
Data::~Data(){}

int Data::getId()
{
	return (_id);
}