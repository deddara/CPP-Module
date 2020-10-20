#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H
# include <string>

class FragTrap{

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

public:
	FragTrap( std::string name );
	~FragTrap( void );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void vaulthunter_dot_exe(std::string const & target);

	unsigned int getMelee(void);
	unsigned int getRange(void);
	unsigned int getRand(void);
	std::string		getName(void);
};


#endif