#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <iostream>
#include <string>

void myTest()
{
	Squad*  s1 = new Squad;
	Squad*  s2 = new Squad;
	TacticalMarine *andrew = new TacticalMarine;
	TacticalMarine *jacob = new TacticalMarine;
	TacticalMarine *michael = new TacticalMarine;
	TacticalMarine *_null = nullptr;
	AssaultTerminator *terminator = new AssaultTerminator;
	AssaultTerminator *terminator2 = new AssaultTerminator;

	std::cout << "*COUNT TEST*" << std::endl;
	s1->push(andrew);
	std::cout << s1->getCount() << std::endl;
	s1->push(jacob);
	std::cout << s1->getCount() << std::endl;
	s1->push(jacob);
	std::cout << s1->getCount() << std::endl;
	s1->push(_null);
	std::cout << s1->getCount() << std::endl;
	std::cout << s2->getCount() << std::endl;

	std::cout << "*GET UNIT TEST*" << std::endl;
	s2->push(michael);
	s2->push(terminator);
	s2->push(terminator2);
	s2->getUnit(0)->battleCry();
	s2->getUnit(1)->battleCry();

	std::cout << "*ASSIGNATION TEST*" << std::endl;
	std::cout << "S1 count : " << s1->getCount() << std::endl;
	std::cout << "S2 count : " <<  s2->getCount() << std::endl;
	*s1 = *s2;
	std::cout << "S1 count : " << s1->getCount() << std::endl;
	std::cout << "S2 count : " <<  s2->getCount() << std::endl;
	s1->getUnit(1)->battleCry();
	delete s1;
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
//	myTest();
	return 0;
}