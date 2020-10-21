#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) { return ;}

PowerFist::~PowerFist() {return ;}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}