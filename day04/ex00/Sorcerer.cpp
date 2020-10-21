#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}
Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy) {
	*this = cpy;
}

std::string Sorcerer::getName() const {
	return (this->_name);
}

std::string Sorcerer::getTitle() const {
	return (this->_title);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sec_arg) {
	this->_name = sec_arg.getName();
	this->_title = sec_arg.getTitle();
	return *this;
}

void Sorcerer::introduce() const {
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(Victim const &vic) const{
	vic.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}