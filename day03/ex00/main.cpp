#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::srand(std::time(0));

	FragTrap robo1("Biba");
	FragTrap robo2("Boba");
	FragTrap robo3("Anton");

	robo1.meleeAttack("Boba");
	robo2.takeDamage(robo1.getMelee);
	return (0);
}