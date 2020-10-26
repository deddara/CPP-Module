#include "easyfind.hpp"

int main()
{
	std::vector<int> num;
	std::vector<int>::iterator it;
	num.push_back(10);
	num.push_back(11);
	num.push_back(32);
	num.push_back(1);
	try{
		it = easyfind(num, 10);
		std::cout << *it << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
}