#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() const{

	std::ostringstream get_the_address;
	std::string address;

	get_the_address << this;
	address = get_the_address.str();
	std::transform(address.begin(), address.end(), address.begin(), ::toupper);
	return(address);
}

Brain::Brain() : _size(10), _nrns_num (20), _old (13) , _color("blue")
{
	(void)_size;
	(void)_nrns_num;
	(void)_old;
	return;
}

Brain::~Brain() {
	return;
}