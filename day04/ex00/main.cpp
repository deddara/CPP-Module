#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

void myTest()
{
	std::cout << "VIRTUAL TEST" << std::endl;
	Sorcerer sorc("Sorc", "The Archmage");
	Victim		vic2("Victim");
	Peon 		peon("Peon");
	Peon		over("Over");
	Victim		*vic = &peon;
	sorc.polymorph(*vic);
	vic = &vic2;
	sorc.polymorph(*vic);
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "OVERLOAD TEST" << std::endl;
	std::cout << peon << vic2;
	vic2 = peon;
	std::cout << vic2;
	peon = over;
	std::cout << peon;
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

//	myTest();
	return 0;
}