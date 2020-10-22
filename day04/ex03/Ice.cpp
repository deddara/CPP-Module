#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { return; }

Ice::Ice(const Ice &ice) { *this = ice; }

Ice::~Ice() { return; }

Ice * Ice::clone() {
	Ice *ic = new Ice(*this);
	return (ic);
}


Ice &Ice::operator=(const Ice &sec_arg) {
	AMateria::operator=(sec_arg);
	return (*this);
}

void 	Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName()<< "*" << std::endl;
}