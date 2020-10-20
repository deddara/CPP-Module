#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

const std::string ScavTrap::challenges[5] = {"Make for SC4V-TP a coffee", "Code in C again", "Take a dance",
											 "Sing a lovely song", "If you will meet Putin, what will you say?"};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, "SC4V-TP")
{
	std::cout << "RUN FOR YOUR LIIIIIVES!!! SC4V-TP " << _name << " is here!" << std::endl;
}

ScavTrap::~ScavTrap( void ) {std::cout << "Crap happens. " \
<< this->_name << " faced death." << std::endl;}

void ScavTrap::challengeNewcomer(void) {
	if (this->_ep < 25)
	{
		std::cout << "*" << this->_name << "* " << "NOT ENOUGH MANA!" << std::endl;
	}
	else {
		this->_ep -= 25;
		this->_rand_index = (std::rand() % (sizeof(challenges) / sizeof(challenges[0])));
		std::cout<< "SC4V-TP " << this->_name << " challenged you! You have to: " << challenges[this->_rand_index] << std::endl;
	}
}
