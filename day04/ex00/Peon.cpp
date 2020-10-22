#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &cpy) : Victim(cpy) {
	return ;
}

Peon & Peon::operator=(const Peon &cp) {
	Victim::operator=(cp);
	return (*this);
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
