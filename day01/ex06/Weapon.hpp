#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class Weapon{

public:
	const std::string &getType()const;
	void setType(std::string type);
	Weapon(std::string type);
	~Weapon();

private:
	std::string _type;

};

#endif