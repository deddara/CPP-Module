#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string name ) : _hp(100), _max_hp(100), _ep(50), \
_max_ep(50),  _lvl(1), _name(name), _ml_dmg(20), _rng_dmg(15), _armor_red(3)
{
	(void)_max_ep;
	(void)_lvl;
	std::cout << "RUN FOR YOUR LIIIIIVES!!! SC4V-TP " << name << " is here!" << std::endl;
}

ScavTrap::~ScavTrap( void ) {std::cout << "Crap happens." \
<< this->_name << " faced death." << std::endl;}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "Crack shot! SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rng_dmg \
	<< " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "Hyah! SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_ml_dmg \
	<< " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	int start_amount = amount;

	if (amount < this->_armor_red)
		amount = 0;
	else
		amount -= this->_armor_red;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "*Holy moly!* SC4V-TP " <<  this->_name << " got attacked with " << start_amount << \
	" damage power! Shield reduced atatck on " \
	<< start_amount - amount << "! Current hp: " << this->_hp << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	int prev_hp = this->_hp;

	if (amount > this->_max_hp)
		this->_hp = this->_max_hp;
	else
		this->_hp += amount;
	std::cout << "*I found health!* SC4V-TP " << this->_name << " got healed by " << this->_hp - prev_hp \
	<< " health points! Now his health is: " << this->_hp << std::endl;
}