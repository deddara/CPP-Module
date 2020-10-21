#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name) : _name(name), _ap(40) { return; }

Character::Character(const Character &cpy) {
	*this = cpy;
}

Character::~Character() {return ;}

void Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::attack(Enemy *target) {
	try {
		std::cout << _name << " attacks " << target->getType() << " with a " << _wpn->getName() << std::endl;
		target->takeDamage(_wpn->getDamage());
		_ap -= _wpn->getAPCost();
		if (target->getHP() <= 0)
			delete target;
	}
	catch {
		return;
	}
}