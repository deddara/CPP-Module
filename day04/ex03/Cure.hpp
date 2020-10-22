#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(Cure const &);
	virtual ~Cure();
	virtual void use(ICharacter& target);
	Cure & operator=(Cure const &);
	Cure * clone();
};

#endif