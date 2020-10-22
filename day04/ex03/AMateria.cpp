#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	retrun ;
}

AMateria::AMateria(AMateria const &cp) {
	*this = cp;
}

AMateria::~AMateria() { return ;}

std::string AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

AMateria & AMateria::operator=(const AMateria &sec_arg) {
	_type = sec_arg.getType();
	_xp = sec_arg.getXP();
}