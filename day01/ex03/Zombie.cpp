#include "Zombie.hpp"

std::string const names[10] = {"Putin", "Navalniy", "Smoker", "Boomer", "Hunter",
						   "Charger", "Tank", "Witch", "Spitter", "Jockey"};

std::string const types[5] = {"left", "right", "ultra-right", "ultra-left", "centrist"};


void	Zombie::announce() const {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	_name = names[std::rand() % (sizeof(names) / sizeof(names[0]))];
	_type = types[std::rand() % (sizeof(types) / sizeof(types[0]))];

	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << " (" << _type << ")> Died :(" << std::endl;
	return ;
}