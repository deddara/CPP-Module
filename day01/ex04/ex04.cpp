#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *brain_p = &brain;
	std::string &brain_r = brain;

	std::cout << *brain_p << std::endl;
	std::cout << brain_r << std::endl;
	return (0);
}
