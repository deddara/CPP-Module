#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {
	return ;
}

PlasmaRifle::~PlasmaRifle() { return; }

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}