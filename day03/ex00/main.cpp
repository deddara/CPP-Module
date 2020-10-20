#include "FragTrap.hpp"
#include <iostream>

void out_of_energy_test (FragTrap & robo3, FragTrap & robo1)
{
	robo3.vaulthunter_dot_exe(robo1.getName());
	robo3.vaulthunter_dot_exe(robo1.getName());
	robo3.vaulthunter_dot_exe(robo1.getName());
	robo3.vaulthunter_dot_exe(robo1.getName());
}

int main()
{
	std::srand(std::time(0));

	FragTrap robo1("Biba");
	FragTrap robo2("Boba");
	FragTrap robo3("Anton");

	robo1.meleeAttack(robo2.getName());
	robo2.takeDamage(robo1.getMelee());

	robo2.rangedAttack(robo3.getName());
	robo3.takeDamage(robo2.getRange());

	robo3.vaulthunter_dot_exe(robo1.getName());
	robo1.takeDamage(robo3.getRand());

//	out_of_energy_test(robo3, robo1);
	return (0);
}