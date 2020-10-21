#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name) : _name(name), _ap(40), _wpn(0) { return; }

Character::Character(const Character &cpy) {
	*this = cpy;
}

Character::~Character() {return ;}

std::string const & Character::getName() const {
	return _name;
}

int			Character::getAp() const { return _ap;}

AWeapon		const & Character::getAWeapon() const {
	return (*_wpn);
}

void Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::attack(Enemy *target) {
	if (_wpn != 0)
		std::cout << _name << " attacks " << target->getType() << " with a " << _wpn->getName() << std::endl;
		target->takeDamage(_wpn->getDamage());
		_ap -= _wpn->getAPCost();
		if (target->getHP() <= 0)
			delete target;
	}
	else {
		return;
	}
}

Character & Character::operator=(Character &sec_arg) {
	_name = sec_arg.getName();
	_wpn = sec_arg.getAWeapon();
	_ap = getAp();
}

void Character::equip(AWeapon *wpn) {
	_wpn = wpn;
}

std::ostream Character::operator<<(std::ostream &o, Character const & sev_arg)
{
	if (_wpn != 0) {
		o << _name << " has " << _ap << " and wields a " << _wpn->getName() << std::endl;
	}
	else {
		o << _name << " has " << _ap << " and is unarmed" << std::endl;
	}
}