#include "Brain.hpp"
#include <iostream>
int main()
{
	Brain br;
	std::string str;
	str = br.identify();
	std::cout << str << std::endl;
	return (0);
}