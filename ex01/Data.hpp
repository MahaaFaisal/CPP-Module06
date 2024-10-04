#ifndef DATA_HPP
# define DATA_HPP

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