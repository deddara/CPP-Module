#include "Pony.hpp"
#include <iostream>
std::string Pony::getPonyColor() const {
	return (_color);
}

int main()
{
	std::string str;
	Pony pon("dsad", "dsaf", "dsafds", 3);
	str = pon.getPonyColor();
	std::cout << str << std::endl;
	return (0);
}
