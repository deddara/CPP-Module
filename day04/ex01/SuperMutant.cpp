#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int dmg) {
	if (dmg < 0)
		return ;
	else
		_hp = (_hp - dmg) + 3;
}