#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(Cure const &);
	virtual ~Cure();
	Cure & operator=(Cure const &);
};

#endif