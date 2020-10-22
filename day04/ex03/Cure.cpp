#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { return ; }

Cure::Cure(const Cure &cp) { *this = cp}

Cure::~Cure() {return ; }

Cure & Cure::operator=(const Cure &sec) {
	AMateria::operator=(sec);
	return (*this);
}