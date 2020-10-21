#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &cpy) {
	*this = cpy;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &) { return (*this);}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine *TacticalMarine::clone() const {
	TacticalMarine *mar = new TacticalMarine(*this);
	return (mar);
}
