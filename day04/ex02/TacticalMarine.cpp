#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &cpy) {
	*this = cpy;
}

//TacticalMarine *TacticalMarine::clone() const {
//	TacticalMarine *mar = new TacticalMarine(*this);
//	return (mar);
//}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}