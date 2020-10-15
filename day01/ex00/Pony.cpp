#include "Pony.hpp"
#include "string"
#include <iostream>



Pony::Pony(std::string color, std::string name, std::string favMeal, int hornLen) : _color(color), \
_name(name), _favMeal(favMeal), _hornLen(hornLen)
{
	std::cout << "created" << std::endl;
	return ;
}

Pony::~Pony() {
	return ;
}