#include "Victim.hpp"
# include <iostream>

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &cpy) {
	*this=cpy;
}

std::string Victim::getName() const { return _name; }

Victim &Victim::operator=(const Victim &sec_arg) {
	this->_name = sec_arg.getName();
	return *this;
}

void Victim::introduce() const {
	std::cout << "I'm " << _name << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim const &vic)
{
	o << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (o);
}