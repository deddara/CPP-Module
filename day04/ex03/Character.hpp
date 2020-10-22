#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*_materia;

public:
	Character();
	Character(Character const &);
	~Character();
	Character & operator=(Character const &);

	std::string	const & getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, Character & target);

};
#endif