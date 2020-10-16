#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() {

	std::ostringstream get_the_address;
	std::string address;

	get_the_address << this;
	address = get_the_address.str();
	std::transform(address.begin(), address.end(), address.begin(), ::toupper);
	return(address);
}