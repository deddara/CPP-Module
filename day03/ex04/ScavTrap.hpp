#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

private:
	static const std::string	challenges[];

public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	void challengeNewcomer(void);

};

#endif