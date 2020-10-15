#ifndef PONY_H
# define PONY_H
# include <string>

class Pony {

public:

	Pony(std::string color, std::string name, std::string favMeal, int hornLen);
	~Pony(void);

private:
	std::string const _color;
	std::string const _name;
	std::string const _favMeal;
	int const 			_hornLen;

};

#endif