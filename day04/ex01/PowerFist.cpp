#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { return ;}

PowerFist::~PowerFist() {return ;}

PowerFist::PowerFist(PowerFist const &cp) : AWeapon(cp) { return ;}

PowerFist & PowerFist::operator=(PowerFist const &sec_arg) {
	AWeapon::operator=(sec_arg);
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}