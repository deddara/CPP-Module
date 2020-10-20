#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap")
{
	std::cout << "Shoryuken! Here is " << _name << " " << _type <<  "!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "What's happening to me..." << this->_name << " " << _type << " faced death." << std::endl;
}