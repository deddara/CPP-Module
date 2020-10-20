#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void out_of_energy_test (FragTrap & robo3)
{
	robo3.vaulthunter_dot_exe("Biba");
	robo3.vaulthunter_dot_exe("Biba");
	robo3.vaulthunter_dot_exe("Biba");
	robo3.vaulthunter_dot_exe("Biba");
}

void fragtrapTest()
{
	FragTrap robo1("Biba");
	FragTrap robo2("Boba");
	FragTrap robo3("Anton");

	robo1.meleeAttack("Boba");
	robo2.takeDamage(robo1.getMelee());

	robo2.rangedAttack("Anton");
	robo3.takeDamage(robo2.getRange());

	robo3.vaulthunter_dot_exe("Biba");
	robo1.takeDamage(robo3.getRand());

//	out_of_energy_test(robo3);
}

void scavtrapTest()
{
	ScavTrap hunter("Hunter");
	ScavTrap warlock("Warlock");
	ScavTrap andrei("Andrei");

	hunter.meleeAttack(warlock.getName());
	warlock.takeDamage(hunter.getMelee());
}

int main()
{
	std::srand(std::time(0));

//	fragtrapTest();
	scavtrapTest();

//	out_of_energy_test(robo3);
	return (0);
}