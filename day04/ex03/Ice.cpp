#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { return; }

Ice::Ice(const Ice &ice) : AMateria(ice) { return; }

Ice::~Ice() { return; }

Ice * Ice::clone() const {
	Ice *ic = new Ice(*this);
	return (ic);
}


Ice &Ice::operator=(const AMateria &sec_arg){
	AMateria::operator=(sec_arg);
	return (*this);
}

void 	Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName()<< "*" << std::endl;
}