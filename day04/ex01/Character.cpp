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

AWeapon		*Character::getAWeapon() const {
	return (_wpn);
}

void Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::attack(Enemy *target) {
	if (_wpn != 0 && _ap >= _wpn->getAPCost())
	{
		std::cout << _name << " attacks " << target->getType() << " with a " << _wpn->getName() << std::endl;
		_wpn->attack();
		target->takeDamage(_wpn->getDamage());
		_ap -= _wpn->getAPCost();
		if (target->getHP() <= 0)
			delete target;
	}
}

Character & Character::operator=(Character const &sec_arg) {
	_name = sec_arg.getName();
	_wpn = sec_arg.getAWeapon();
	_ap = getAp();
	return (*this);
}

void Character::equip(AWeapon *wpn) {
	_wpn = wpn;
}

std::ostream & operator<<(std::ostream &o, Character const & sev_arg)
{
	if (sev_arg.getAWeapon() != 0) {
		o << sev_arg.getName() << " has " << sev_arg.getAp() << " AP and wields a " << sev_arg.getAWeapon()->getName() << std::endl;
	}
	else
		o << sev_arg.getName() << " has " << sev_arg.getAp() << " AP and is unarmed" << std::endl;
	return (o);
}