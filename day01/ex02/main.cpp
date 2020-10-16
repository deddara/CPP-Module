#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>

std::string const names[10] = {"Putin", "Navalniy", "Smoker", "Boomer", "Hunter",
						   "Charger", "Tank", "Witch", "Spitter", "Jockey"};

void randomChump()
{
	int index;

	srand((unsigned) time(0));
	index =  (rand() % (sizeof(names) / sizeof(names[0])));

	Zombie zomb(names[index], "Chump");
	zomb.announce();
}

int main()
{
	Zombie		stackZomb("Joji", "stack");
	Zombie		*heapZomb;
	ZombieEvent	eventer;

	stackZomb.announce();

	eventer.setZombieType("heap");
	heapZomb = eventer.newZombie("Lord Hokage");
	heapZomb->announce();
	delete heapZomb;

	randomChump();

	return 1;
}