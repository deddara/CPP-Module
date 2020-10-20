#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string			_name;
	unsigned int		_hp;
	unsigned int 		_max_hp;
	unsigned int 		_ep;
	unsigned int 		_max_ep;
	unsigned int 		_lvl;
	unsigned int 		_ml_dmg;
	unsigned int		_rng_dmg;
	unsigned int 		_armor_red;
	int 				_rand_index;
	std::string			_type;
public:
	ClapTrap(std::string);
	ClapTrap(std::string name, unsigned int hp, unsigned int max_hp, unsigned int ep, \
	unsigned int max_ep, unsigned int lvl, unsigned int ml_dmg, unsigned int rng_dmg, \
	unsigned int armor_red, std::string type);
	~ClapTrap();
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	unsigned int getMelee(void);
	unsigned int getRange(void);
	std::string		getName(void);


};


#endif