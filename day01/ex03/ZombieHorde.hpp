#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H
# include "Zombie.hpp"



class ZombieHorde{

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce(void)const;

private:

	Zombie *_zombies;
	int const	_num;



};

#endif