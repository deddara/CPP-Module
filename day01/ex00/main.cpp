#include "Pony.hpp"
#include <iostream>

void  ponyOnTheHeap()
{
	Pony	*pon = new Pony("Carol", "yellow", "potatoes");
	Pony	*pon1 = new Pony("Vika", "white", "bowl");

	int num = pon->getNum();
	std::cout << "Total num of ponies: " <<  num << std::endl;
	std::cout << "Color of " << pon->getPonyName() << " is: " << pon->getPonyColor() << std::endl;
	std::cout << "Color of " << pon1->getPonyName() << " is: " << pon1->getPonyColor() << std::endl;

	delete pon;
	delete pon1;
	return ;
}

void  ponyOnTheStack()
{
	Pony pon("Lily", "brown", "Soup");
	Pony pon2("Sally", "Orange", "Carrot");
	int num = pon.getNum();
	std::cout << "Total num of ponies: " <<  num << std::endl;
	std::cout << "Color of " << pon.getPonyName() << " is: " << pon.getPonyColor() << std::endl;
	std::cout << "Color of " << pon2.getPonyName() << " is: " << pon2.getPonyColor() << std::endl;
	return ;
}

int main()
{
	std::string str;
	int num;
	Pony pon("Katey", "Green", "Apple");

	num = pon.getNum();
	std::cout << "(main) Total num of ponies: " <<  num << std::endl;
	ponyOnTheStack();
	std::cout << "(main) Total num of ponies: " << num << std::endl;
	ponyOnTheHeap();
	std::cout << "(main) Total num of ponies: " << num << std::endl;
	return (0);
}
