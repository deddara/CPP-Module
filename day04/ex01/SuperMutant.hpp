#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"

class SuperMutant : public Enemy{

public:
	SuperMutant();
	~SuperMutant();
	void takeDamage(int);

};

#endif