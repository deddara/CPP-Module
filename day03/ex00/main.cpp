#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::srand(std::time(0));
	FragTrap t1("Lokh");
	FragTrap t2("Fack");
	t1.rangedAttack("zhopa");
	t2.takeDamage(1500);
	t1.meleeAttack("zhopa");
	t2.beRepaired(200);
	t2.vaulthunter_dot_exe("HUY");
	return (0);
}