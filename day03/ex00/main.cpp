#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap t1("Lokh");
	FragTrap t2("Fack");
	t1.rangedAttack("zhopa");
	t2.takeDamage(1500);
	t1.meleeAttack("zhopa");
	t2.beRepaired(200);
	return (0);
}