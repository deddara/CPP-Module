#include "HumanA.hpp"
#include "iostream"


void	HumanA::attack(void) const{
	std::cout << this->_name << " attacks with his " << _wpn->getType() << std::endl;
	return ;
}

HumanA::HumanA(const std::string &name, Weapon &wpn) : _name(name) {
	_wpn = &wpn;
	return;
}

HumanA::~HumanA() {
	return;
}