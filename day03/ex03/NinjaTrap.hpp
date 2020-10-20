#ifndef NINJATRAP_H
# define NINJATRAP_H
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

private:
	static const std::string	act[];
	static const int 			act_dmg[];

public:
	NinjaTrap( std::string name );
	~NinjaTrap( void );

	void ninjaShoebox( ClapTrap & clp_trp);
	void ninjaShoebox( ScavTrap & scv_trp);
	void ninjaShoebox( FragTrap & frg_trp);
	void ninjaShoebox( NinjaTrap & ninja_trp);
	unsigned int getRandActDmg(void);
};

#endif