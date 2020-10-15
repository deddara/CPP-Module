#ifndef PONY_H
# define PONY_H
# include <string>

class Pony {

public:

	Pony(std::string name, std::string color, std::string favMeal, int hornLen);
	~Pony(void);

	static int num;
	std::string getPonyColor() const {return _color;}
	std::string getPonyName() const {return _name;}
	int getNum() const;

private:
	std::string const _color;
	std::string const _name;
	std::string const _favMeal;
	int const 			_hornLen;

};

#endif