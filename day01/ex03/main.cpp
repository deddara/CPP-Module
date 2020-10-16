#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>


int main()
{
	std::srand(std::time(0));

	ZombieHorde zz(12);
	zz.announce();

	return 0;
}