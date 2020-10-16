#include "HumanB.hpp"
#include "iostream"
void HumanB::setWeapon(Weapon &wpn){
	_wpn = &wpn;
}

void	HumanB::attack(void) const{
	std::cout << this->_name << " attacks with his " << _wpn->getType() << std::endl;
	return ;
}

HumanB::HumanB(const std::string &name) : _name(name) {return ;}
HumanB::~HumanB() {return;}