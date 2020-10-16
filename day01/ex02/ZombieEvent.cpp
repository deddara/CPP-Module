#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type){

	_type = type;
	return;

}

Zombie*	ZombieEvent::newZombie(std::string name) {

	Zombie *zomb = new Zombie(name, _type);
	return (zomb);

}