#include "Victim.hpp"
# include <iostream>

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason" << std::endl;
}

Victim::Victim(const Victim &cpy) {
	*this=cpy;
}

std::string Victim::getName() const { return _name; }

Victim &Victim::operator=(const Victim &sec_arg) {
	this->_name = sec_arg.getName();
	return *this;
}