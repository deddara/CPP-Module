#include "Zombie.hpp"


void	Zombie::announce() const {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name) , _type(type)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> Died :(" << std::endl;
	return ;
}