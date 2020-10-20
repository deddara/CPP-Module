#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <string>

class ScavTrap{

private:
	unsigned int		_hp;
	unsigned int 		_max_hp;
	unsigned int 		_ep;
	unsigned int 		_max_ep;
	unsigned int 		_lvl;
	std::string			_name;
	unsigned int 		_ml_dmg;
	unsigned int		_rng_dmg;
	unsigned int 		_armor_red;
	int 				rand_index;
	static const std::string	challenges[];

public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void challengeNewcomer(void);

	unsigned int getMelee(void);
	unsigned int getRange(void);
	std::string	getName(void);
};

#endif