#ifndef CONVER_H
# define CONVER_H
# include <string>
class Num{
private:
	std::string _type;
	bool 		_char_displ;
	int 		number;
	char 		number_c;
	double 		number_d;
	char c;
	double d;
	float f;
	int i;

public:
	Num() : _char_displ(0) {}
	void 	setType(std::string type) { _type = type;}
	void 	setDispl(int num);
	bool 	getDispl() {return _char_displ; }
	std::string getType() { return _type; }
	bool 	convertNum(std::string str);

	int 	getInt();
	double getDouble();
	char 	getChar();

	void 	makeCast(int num);
	void 	makeCast(char num);
	void 	makeCast(double num);
};

#endif