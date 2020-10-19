#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string name ) : _name(name), _hp(100), _max_hp(100), _ep(100), \
_max_ep(100), _lvl(1), _ml_dmg(30), _rng_dmg(20), _armor_red(5)
{
	std::cout << "Alaka-ZAM!" << std::endl;
}

FragTrap::~FragTrap( void ) {std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;}