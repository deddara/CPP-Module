#ifndef CHARACTER_H
# define CHARACTER_H
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int 		ap;
	AWeapon		*wpn;

public:
	Character(std::string const & name);
	Character(Character const &);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;
};

#endif