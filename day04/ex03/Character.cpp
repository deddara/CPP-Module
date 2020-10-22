#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	return ;
}

Character::Character(const Character &cp) {
	*this = cp;
}

Character & Character::operator=(const Character &sec_arg) {
	if (this == &sec_arg)
		return (*this);

}