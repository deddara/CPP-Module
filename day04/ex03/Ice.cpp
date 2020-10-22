#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { return; }

Ice::Ice(const Ice &ice) { *this = ice; }

Ice::~Ice() { return; }

Ice &Ice::operator=(const Ice &sec_arg) {
	AMateria::operator=(sec_arg);
	return (*this);
}