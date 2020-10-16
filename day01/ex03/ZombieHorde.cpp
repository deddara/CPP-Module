#include "ZombieHorde.hpp"
#include "Zombie.hpp"


void ZombieHorde::announce() const {
	int i = 0;

	while (i < _num)
	{
		_zombies[i].announce();
		i++;
	}
}

ZombieHorde::ZombieHorde(int n) : _num(n) {
	_zombies = new Zombie[n];
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombies;
}