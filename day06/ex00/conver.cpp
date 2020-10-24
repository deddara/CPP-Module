#include <iostream>
#include <string>

class Num{
private:
	std::string _type;

public:
	void 	setType(std::string type) { _type = type;}
	std::string getType() { return _type; }
};

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
	return(1);
}

int main(int argc, char **argv)
{
	Num		num;

	if (argc != 2){
		std::cout << "Invalid arguments!" << std::endl;
		return (1);
	}

	std::string arg = argv[1];
	std::string type;
	if (checkInfNan(arg, num))
		return (infNanHandler(num));
	if (checkStr(arg, num))
		return (1);
	std::cout << num.getType();
}