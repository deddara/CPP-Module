#ifndef HUMAN_B_H
#define HUMAN_B_H
# include "string"
# include "Weapon.hpp"

class HumanB{

public:
	HumanB(const std::string &name);
	~HumanB();
	void setWeapon(Weapon &wpn);
	void attack(void) const;


private:
	std::string _name;
	Weapon		*_wpn;

};

#endif