#include "FragTrap.hpp"
#include <iostream>

const std::string FragTrap::attacks[5] = {
		"Fire Element", "vegetable juice", "Shock Element", "ice cream", "shield"
};

const int FragTrap::attacks_dmg[5] = {100, 5, 3, 99999, 50};

FragTrap::FragTrap( std::string name ) : _hp(100), _max_hp(100), _ep(100), \
_max_ep(100),  _lvl(1), _name(name), _ml_dmg(30), _rng_dmg(20), _armor_red(5)
{
	(void)_max_ep;
	(void)_lvl;
	std::cout << "Alaka-ZAM! My name is " << name << "!" << std::endl;
}

FragTrap::~FragTrap( void ) {std::cout << "Argh arghargh death gurgle gurglegurgle urgh... " \
<< this->_name << " faced death." << std::endl;}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rng_dmg \
	<< " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_ml_dmg \
	<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	int start_amount = amount;

	if (amount < this->_armor_red)
		amount = 0;
	else
		amount -= this->_armor_red;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "FR4G-TP " <<  this->_name << " got attacked with " << start_amount << \
	" damage power! Shield reduced atatck on " \
	<< start_amount - amount << "! Current hp: " << this->_hp << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	int prev_hp = this->_hp;

	if (amount > this->_max_hp)
		this->_hp = this->_max_hp;
	else
		this->_hp += amount;
	std::cout << "FR4G-TP " << this->_name << " got healed by " << this->_hp - prev_hp \
	<< " health points! Now his health is: " << this->_hp << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (this->_ep < 25)
	{
		std::cout << "*" << this->_name << "* " << "Shit... don't have any energy man..." << std::endl;
	}
	else {
		this->_ep -= 25;
		this->rand_index = (std::rand() % (sizeof(attacks) / sizeof(attacks[0])));
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with " << attacks[this->rand_index] << " causing " \
		<< attacks_dmg[this->rand_index] << " points of damage!" << std::endl;
	}
}

unsigned int FragTrap::getMelee(void) {
	return (this->_ml_dmg);
}

unsigned int FragTrap::getRange(void) {
	return (this->_rng_dmg);
}
unsigned int FragTrap::getRand(void) {
	return (attacks_dmg[rand_index]);
}

std::string FragTrap::getName(){
	return(this->_name);
}