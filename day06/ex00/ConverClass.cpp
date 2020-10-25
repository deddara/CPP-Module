#include "ConverClass.hpp"
#include "iostream"

void Num::setDispl(int num) {
	if ((num >= 0 && num <= 31) || num == 127)
		_char_displ = 1;
}

bool Num::convertNum(std::string arg) {
	if (_type == "char")
	{
		number_c = arg[0];
	}
	else if (_type == "int")
	{
		try{
			number = std::stoi(arg);
		}
		catch (std::exception &ex) {
			_overflow = 1;
			return (0);
		}
	}
	else if (_type == "double")
	{
		try{
			number_d = std::stod(arg);
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
			return (1);
		}
		try{
			int test = std::stoi(arg);
			(void)test;
		}
		catch (std::exception &ex) {
			_overflow = 1;
		}
	}
	return (0);
}

int	Num::getInt() { return number; }

char Num::getChar() {return number_c; }

double Num::getDouble() {return number_d; }

void	Num::makeCast(int number) {
	if (_overflow == 1)
	{
		std::cout << "char: impossible" << std::endl << "int: overflow" << "\nfloat: can't get value" << std::endl << "double: can't get value" << std::endl;
		return;
	}
	c = static_cast<char>(number);
	d = static_cast<double>(number);
	f = static_cast<float>(number);
	i = static_cast<int>(number);
	this->setDispl(c);
	if (number <= 0 || number > 127)
		std::cout << "char: impossible" << std::endl;
	else if (this->getDispl() == 0)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: not displayable" << std::endl;
	if (_overflow == 1)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl << "double: " << d << ".0" << std::endl;
}

void	Num::makeCast(char number) {
	c = static_cast<char>(number);
	d = static_cast<double>(number);
	f = static_cast<float>(number);
	i = static_cast<int>(number);
	this->setDispl(c);
	if (number <= 0 || number > 127)
		std::cout << "char: impossible" << std::endl;
	else if (this->getDispl() == 0)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: not displayable" << std::endl;
	std::cout << "int: " << i << std::endl << \
	"float: " << f << ".0f" << std::endl << "double: " << d << ".0" << std::endl;
}

void	Num::makeCast(double number) {
	c = static_cast<char>(number);
	d = static_cast<double>(number);
	f = static_cast<float>(number);
	i = static_cast<int>(number);
	this->setDispl(c);
	if (number <= 0 || number > 127)
		std::cout << "char: impossible" << std::endl;
	else if (this->getDispl() == 0)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: not displayable" << std::endl;
	if (_overflow == 1)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (number == 0)
		std::cout << "float: " << f << std::endl << ".0f" << "double: " << d << ".0" << std::endl;
	else
		std::cout << "float: " << f << std::endl << "f" << "double: " << d << std::endl;
}