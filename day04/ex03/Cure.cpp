#include "Cure.hpp"
# include <iostream>

Cure::Cure() : AMateria("cure") { return ; }

Cure::Cure(const Cure &cp) : AMateria(cp) {return ; }

Cure::~Cure() {return ; }

Cure * Cure::clone() const {
	Cure *cur = new Cure(*this);
	return (cur);
}

Cure & Cure::operator=(const Cure &sec) {
	AMateria::operator=(sec);
	return (*this);
}

void 	Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}