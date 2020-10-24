#include <iostream>
#include <string>

class Num{
private:
	std::string _type;
public:
	Num
	void 	setType(std::string type) { _type = type;}
	std::string getType() { return _type };
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
		return (infNanHandler(num))
}