#include <iostream>
#include <string>
# include "ConverClass.hpp"

int 		checkInfNan(std::string arg, Num &num)
{
	if (arg == "inf" || arg == "+inf" || arg == "+inff" || arg == "inff")
		num.setType("inf");
	else if (arg == "-inf" || arg == "-inff")
		num.setType("-inf");
	else if (arg == "nan" || arg == "nanf")
		num.setType("nan");
	else
		return (0);
	return (1);
}

int 		infNanHandler(Num &num)
{
	std::string for_f = num.getType();
	for_f += "f";

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << for_f << std::endl;
	std::cout << "double: " << num.getType() << std::endl;
	return (1);
}

bool is_digits(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

bool checkStr(std::string arg, Num &num)
{
	if (arg.length() == 1 && !is_digits(arg))
	{
		num.setType("char");
		return (0);
	}
	try {
		double check_str = std::stod(arg);
		(void)check_str;
	}
	catch (std::exception &ex) {
		std::cout << "Is not valid value" << std::endl;
		return (1);
	}
	std::size_t found = arg.find(".");
	if (found!=std::string::npos)
		num.setType("double");
	else
		num.setType("int");
	return(0);
}


void	numHandler(std::string arg, Num & num)
{
	if(num.convertNum(arg) == 1)
		return ;
	if (num.getType() == "char")
		num.makeCast(num.getChar());
	else if (num.getType() == "int")
		num.makeCast(num.getInt());
	else if (num.getType() == "double")
		num.makeCast(num.getDouble());

}

int main(int argc, char **argv)
{
	Num		num;

	if (argc != 2){
		std::cout << "Invalid arguments!" << std::endl;
		return (1);
	}

	std::string arg = argv[1];
	if (checkInfNan(arg, num))
		return (infNanHandler(num));
	if (checkStr(arg, num))
		return (1);
	numHandler(arg, num);
	return (0);
}