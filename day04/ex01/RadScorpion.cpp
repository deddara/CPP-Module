#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &scorp) : Enemy(scorp) { return ;}

RadScorpion & RadScorpion::operator=(const RadScorpion &sec_arg) {
	Enemy::operator=(sec_arg);
	return (*this);
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}