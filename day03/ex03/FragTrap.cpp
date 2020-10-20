#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

const std::string FragTrap::attacks[5] = {
		"Fire Element", "vegetable juice", "Shock Element", "ice cream", "shield"
};

const int FragTrap::attacks_dmg[5] = {100, 5, 3, 99999, 50};

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP")
{
	std::cout << "Alaka-ZAM! My name is " << _name << "!" << std::endl;
}

FragTrap::~FragTrap( void ) {std::cout << "Argh arghargh death gurgle gurglegurgle urgh... " \
<< this->_name << " faced death." << std::endl;}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (this->_ep < 25)
	{
		std::cout << "*" << this->_name << "* " << "Shit... don't have any energy man..." << std::endl;
	}
	else {
		this->_ep -= 25;
		this->_rand_index = (std::rand() % (sizeof(attacks) / sizeof(attacks[0])));
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with " << attacks[this->_rand_index] << " causing " \
		<< attacks_dmg[this->_rand_index] << " points of damage!" << std::endl;
	}
}
