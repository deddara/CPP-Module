#include "Bureaucrat.hpp"
#include <iostream>
int main()
{
	try {
		Bureaucrat anton("anton", 151);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}