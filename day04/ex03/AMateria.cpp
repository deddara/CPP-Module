#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0){
	return ;
}

AMateria::AMateria(AMateria const &cp) {
	*this = cp;
}

AMateria::~AMateria() { return ;}

std::string const & AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

AMateria & AMateria::operator=(const AMateria &sec_arg) {
	if (this == &sec_arg)
		return (*this);
	_type = sec_arg.getType();
	_xp = sec_arg.getXP();
	return (*this);
}

void 	AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}