#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(Ice const &);
	virtual ~Ice();
	virtual Ice 	*clone() const;
	virtual void use(ICharacter& target);
	Ice &operator=(AMateria const &);
};

#endif