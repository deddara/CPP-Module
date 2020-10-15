#include "Pony.hpp"
#include "string"
#include <iostream>

int Pony::getNum()const{
	return(Pony::num);
}

int Pony::num = 0;

Pony::Pony(std::string name, std::string color, std::string favMeal) : _name(name), _color(color), \
 _favMeal(favMeal)
{
	Pony::num++;
	std::cout << _name << " has born!" <<  std::endl;
	return ;
}

Pony::~Pony() {
	std::cout << _name << " has died:(" <<  std::endl;
	return ;
}