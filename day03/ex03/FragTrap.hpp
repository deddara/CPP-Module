#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

private:
	static const std::string	attacks[];
	static const int 			attacks_dmg[];

public:
	FragTrap( std::string name );
	~FragTrap( void );
	void vaulthunter_dot_exe(std::string const & target);

};


#endif