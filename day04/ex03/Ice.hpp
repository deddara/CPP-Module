#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(Ice const &);
	virtual ~Ice();
	Ice &operator=(Ice const &);
};

#endif