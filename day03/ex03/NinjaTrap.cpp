#include "NinjaTrap.hpp"

const std::string NinjaTrap::act[5] = {"ROAR", "Shoryuken", "katana", "kunai", "rice"};
const int NinjaTrap::act_dmg[5] = {100, 30, 54, 27, 900};

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap")
{
	std::cout << "Shoryuken! Here is " << _name << " " << _type <<  "!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "What's happening to me... " << this->_name << " " << _type << " faced death." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frg_trp) {
	_rand_index = (std::rand() % (sizeof(act) / sizeof(act[0])));
	std::cout << "*Hyaaa* " << _name << " " << _type << "attacked " << frg_trp.getName() << " with " << act[_rand_index] << "!" << std::endl;
	frg_trp.takeDamage(this->getRandActDmg());
}

unsigned int NinjaTrap::getRandActDmg(void) {
	return (act_dmg[_rand_index]);
}
