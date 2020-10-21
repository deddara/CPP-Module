#ifndef CHARACTER_H
# define CHARACTER_H
# include <ostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int 		_ap;
	AWeapon		*_wpn;

public:
	Character(std::string const & name);
	Character(Character const &);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;
	int 				getAp() const;
	AWeapon		const &getAWeapon() const;

	Character &operator=(Character &);
};

std::ostream &operator<<(std::ostream &o, Character const &);

#endif