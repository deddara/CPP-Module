#include "Pony.hpp"
#include "string"
#include <iostream>

int Pony::getNum()const{
	return(Pony::num);
}

int Pony::num = 0;

Pony::Pony(std::string name, std::string color, std::string favMeal, int hornLen) : _name(name), _color(color), \
 _favMeal(favMeal), _hornLen(hornLen)
{
	Pony::num++;
	std::cout << _name << " has born!" <<  std::endl;
	return ;
}

Pony::~Pony() {
	std::cout << _name << " has died:(" <<  std::endl;
	return ;
}