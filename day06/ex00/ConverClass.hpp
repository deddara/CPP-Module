#ifndef CONVER_H
# define CONVER_H
# include <string>
class Num{
private:
	std::string _type;
	bool 		_char_displ;

public:
	Num() : _char_displ(0) {}
	void 	setType(std::string type) { _type = type;}
	void 	setDispl(int num);
	std::string getType() { return _type; }
};

#endif