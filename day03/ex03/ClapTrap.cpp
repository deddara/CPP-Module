#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int max_hp, unsigned int ep, unsigned int max_ep,
				   unsigned int lvl, unsigned int ml_dmg, unsigned int rng_dmg, unsigned int armor_red,
				   std::string type) : _name(name), _hp(hp), _max_hp(max_hp), _ep(ep), _max_ep(max_ep), \
				   _lvl(lvl), _ml_dmg(ml_dmg), _rng_dmg(rng_dmg), _armor_red(armor_red), _type(type){
				   std::cout << "Parent constructor for " << _type << " " << _name <<  " called!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Parent destructor for " << _type << " " << _name <<  " called!" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at range, causing " << this->_rng_dmg \
	<< " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at melee, causing " << this->_ml_dmg \
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	int start_amount = amount;

	if (amount < this->_armor_red)
		amount = 0;
	else
		amount -= this->_armor_red;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << this->_type << " " << this->_name << " got attacked with " << start_amount << \
	" damage power! Shield reduced atatck on " \
	<< start_amount - amount << "! Current hp: " << this->_hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	int prev_hp = this->_hp;

	if (amount > this->_max_hp)
		this->_hp = this->_max_hp;
	else
		this->_hp += amount;
	std::cout << this->_type << " " << this->_name << " got healed by " << this->_hp - prev_hp \
	<< " health points! Now his health is: " << this->_hp << std::endl;
}

unsigned int ClapTrap::getMelee(void) {
	return (this->_ml_dmg);
}

unsigned int ClapTrap::getRange(void) {
	return (this->_rng_dmg);
}

std::string ClapTrap::getName(){
	return(this->_name);
}
