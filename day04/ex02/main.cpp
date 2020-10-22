#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	std::cout << vlc->getCount();
	ISpaceMarine* cur = vlc->getUnit(0);
//	cur->battleCry();
//	cur->rangedAttack();
//	cur->meleeAttack();
}