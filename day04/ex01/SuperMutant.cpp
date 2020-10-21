#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &mut) : Enemy(mut) { return ;}

SuperMutant & SuperMutant::operator=(const SuperMutant &sec_arg) {
	Enemy::operator=(sec_arg);
	return (*this);
}

void SuperMutant::takeDamage(int dmg) {
	Enemy::takeDamage(dmg - 3);
}