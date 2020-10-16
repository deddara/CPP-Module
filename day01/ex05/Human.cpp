#include "Human.hpp"
#include <sstream>
#include "iostream"

const Brain	&Human::getBrain() const {
	return (br);
}

std::string Human::identify() const {
	return (br.identify());
}

Human::Human() : br()
{
	return;
}

Human::~Human() {
	return;
}