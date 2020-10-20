#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5, "SuperTrap"), FragTrap(name), NinjaTrap(name) {
	std::cout << "<" << _type << "> I just born!" << std::endl;
}
SuperTrap::~SuperTrap() {
	std::cout << "<" << _type << "> I just died!" << std::endl;
}