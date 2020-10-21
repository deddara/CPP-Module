#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::~PlasmaRifle() { return; }

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cp) : AWeapon(cp) { return ;}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &sec_arg) {
	AWeapon::operator=(sec_arg);
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}