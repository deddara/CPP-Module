#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>
#include <string>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* bob1 = nullptr;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	std::cout << vlc->getCount() <<std::endl;
	vlc->push(bob);
	std::cout << vlc->getCount() << std::endl;


	ISpaceMarine* cur = vlc->getUnit(0);
//	cur->battleCry();
//	cur->rangedAttack();
//	cur->meleeAttack();
}