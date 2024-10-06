#ifndef __DATA_HPP__
# define __DATA_HPP__

class Data
{
	private:
		int _id;

		Data();

	public:
		Data(int id);
		Data(Data &other);
		Data &operator=(Data &rhs);
		~Data();

		int getId();
};
#endif