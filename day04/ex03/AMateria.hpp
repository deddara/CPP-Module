#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include "main.hpp"

class AMateria{

private:
	std::string _type;
	unsigned int _xp;

public:
	AMateria(std::string const & type);
	AMateria(AMateria const &);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &);
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif