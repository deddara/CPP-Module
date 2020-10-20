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