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
	ISquad* vlc2 = new Squad;

	vlc->push(bob);
	vlc->push(bob2);
	*vlc2 = *vlc;
	delete vlc;
//	cur->battleCry();
//	cur->rangedAttack();
//	cur->meleeAttack();
}
