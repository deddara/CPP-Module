#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"

class RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	RadScorpion & operator=(RadScorpion const &);
	virtual ~RadScorpion();
};

#endif