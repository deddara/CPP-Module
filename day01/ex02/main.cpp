#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>

std::string const names[10] = {"Putin", "Navalniy", "Smoker", "Boomer", "Hunter",
						   "Charger", "Tank", "Witch", "Spitter", "Jockey"};

void randomChump()
{
	int index;

	index =  (std::rand() % (sizeof(names) / sizeof(names[0])));

	Zombie zomb(names[index], "Chump");
	zomb.announce();
}

int main()
{
	std::srand(std::time(0));

	Zombie		stackZomb("Joji", "stack");
	Zombie		*heapZomb;
	ZombieEvent	eventer;

	stackZomb.announce();

	eventer.setZombieType("heap");
	heapZomb = eventer.newZombie("Lord Hokage");
	heapZomb->announce();
	delete heapZomb;

	randomChump();

	return 0;
}