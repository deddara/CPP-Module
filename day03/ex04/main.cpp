#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
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

	robo1.meleeAttack(robo2.getName());
	robo2.takeDamage(robo1.getMelee());

	robo2.rangedAttack(robo3.getName());
	robo3.takeDamage(robo2.getRange());

	robo3.vaulthunter_dot_exe(robo1.getName());
	robo1.takeDamage(robo3.getRand());

	out_of_energy_test(robo3);
}

void scavtrapTest()
{
	ScavTrap hunter("Hunter");
	ScavTrap warlock("Warlock");
	ScavTrap andrei("Andrei");

	hunter.meleeAttack(warlock.getName());
	warlock.takeDamage(hunter.getMelee());

	warlock.rangedAttack(andrei.getName());
	andrei.takeDamage(warlock.getRange());

	hunter.challengeNewcomer();
}

void NinjaTrapTest()
{
	NinjaTrap	ninja("Saruko");
	NinjaTrap	ninja2("Yoshi");
	ScavTrap	simple_scav("Simpler");
	FragTrap	simple_trap("Trapper");
	ClapTrap	simple_clap("Clapper");

	ninja.ninjaShoebox(simple_clap);
	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(simple_trap);
	ninja.ninjaShoebox(simple_scav);
}

void SuperTrapTest()
{
	SuperTrap super("Super");
	FragTrap	frag("fragger");
	ScavTrap	scav("scaver");

	super.meleeAttack(frag.getName());
	frag.takeDamage(super.getMelee());
	super.rangedAttack(frag.getName());
	frag.takeDamage(super.getRange());

	super.ninjaShoebox(frag);
	super.vaulthunter_dot_exe(frag.getName());
	frag.takeDamage(super.getRand());
}

int main()
{
	std::srand(std::time(0));

	fragtrapTest();
	std::cout << "----------------------------------------------------------" << std::endl;
	scavtrapTest();
	std::cout << "----------------------------------------------------------" << std::endl;
	NinjaTrapTest();
	std::cout << "----------------------------------------------------------" << std::endl;
	SuperTrapTest();
	return (0);
}

