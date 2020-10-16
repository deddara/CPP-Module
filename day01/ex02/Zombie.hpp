#ifndef ZOMBIE_H
# define ZOMBIE_H
# include "iostream"
# include <string>

class Zombie
{

private:
	std::string _name;
	std::string _type;

public:
	void announce()const;
	Zombie(std::string name, std::string type);
	~Zombie(void);
};

#endif