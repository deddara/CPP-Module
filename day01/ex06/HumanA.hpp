#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include "Weapon.hpp"

class HumanA{

public:
	void attack(void) const;
	HumanA(const std::string &name, Weapon &wpn);
	~HumanA();

private:
	std::string _name;
	Weapon		*_wpn;
};


#endif