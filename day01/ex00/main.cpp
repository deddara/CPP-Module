#include "Pony.hpp"
#include <iostream>

std::string Pony::getPonyColor() const {
	return (_color);
}

int  ponyOnTheStack()
{
	Pony pon("dsad", "dsaf", "dsafds", 3);
	Pony pon2("dsad", "dsaf", "dsafds", 3);
	int num = pon.getNum();

	std::cout << num << std::endl;
	return (0);
}

int main()
{
	std::string str;
	int num;
	Pony pon("dsad", "dsaf", "dsafds", 3);
	str = pon.getPonyColor();
	num = pon.getNum();
	std::cout << num << std::endl;
	ponyOnTheStack();
	std::cout << num << std::endl;
	return (0);
}
