#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H
# include "Zombie.hpp"

class ZombieEvent
{

private:
	std::string _type;

public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
};

#endif