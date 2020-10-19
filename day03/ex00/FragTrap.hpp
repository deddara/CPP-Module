#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H
# include <string>

class FragTrap{

private:
	int			_hp;
	int 		_max_hp;
	int 		_ep;
	int 		_max_ep;
	int 		_lvl;
	std::string	_name;
	int 		_ml_dmg;
	int 		_rng_dmg;
	int 		_armor_red;

public:
	FragTrap( std::string name );
	~FragTrap( void );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
//	void beRepaired( unsigned int amount );

};


#endif