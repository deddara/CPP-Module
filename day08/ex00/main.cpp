#include "easyfind.hpp"
#include <list>

int main()
{
	std::vector<int> num;
	std::list<int> list;
	num.push_back(10);
	num.push_back(11);
	num.push_back(32);
	num.push_back(1);
	list.push_back(40);
	list.push_back(30);
	list.push_back(19);
	try{
		std::cout << *easyfind(num, 10) << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	try{
		std::cout << *easyfind(num, -10) << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	try{
		std::cout << *easyfind(num, 11) << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	try{
		std::cout << *easyfind(list, 11) << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
	try{
		std::cout << *easyfind(list, 19) << std::endl;
	}
	catch (std::string &ex) {
		std::cout << ex << std::endl;
	}
}