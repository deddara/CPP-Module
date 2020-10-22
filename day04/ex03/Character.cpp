#include "Character.hpp"
#include <string>
#include <iostream>
Character::Character(std::string name) : _name(name) {
	int i = 0;
	while (i < 4)
	{
		_materia[i] = nullptr;
		i++;
	}
	return ;
}

Character::~Character(){
	int i = 0;
	while (i < 4)
	{
		if (_materia[i] != nullptr) {
			delete _materia[i];
		}
		i++;
	}
}

Character::Character(const Character &cp) {
	*this = cp;
}

Character & Character::operator=(const Character &sec_arg) {
	if (this == &sec_arg)
		return (*this);
	this->~Character();
	int i = 0;
	while (i < 4)
	{
		if (sec_arg._materia[i] != nullptr)
		{
			_materia[i] = sec_arg._materia[i]->clone();
		}
		i++;
	}
	_name = sec_arg.getName();
	return (*this);
}

std::string	const & Character::getName() const { return _name;}

void 				Character::equip(AMateria *m) {
	if (m == nullptr)
		return;
	int i = 0;
	while (i < 4)
	{
		if (_materia[i] == nullptr)
		{
			_materia[i] = m;
			return ;
		}
		i++;
	}
}

void 				Character::unequip(int idx) {
	if (_materia[idx] == nullptr || idx < 0 || idx > 3)
		return;
	_materia[idx] = nullptr;
}

void 				Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || _materia[idx] == nullptr) {
		return;
	}
	_materia[idx]->use(target);
}