#include "Pony.hpp"
#include "string"
#include <iostream>

int Pony::getNum()const{
	return(Pony::num);
}

int Pony::num = 0;

Pony::Pony(std::string color, std::string name, std::string favMeal, int hornLen) : _color(color), \
_name(name), _favMeal(favMeal), _hornLen(hornLen)
{
	Pony::num++;
	std::cout << "created" << std::endl;
	return ;
}

Pony::~Pony() {
	return ;
}