#ifndef AWEAPON_H
# define AWEAPON_H
# include <string>
# include <iostream>

class AWeapon{

private:
	std::string _name;
	int 		_apcost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &);
	virtual ~AWeapon();
	AWeapon & operator=(AWeapon const &);

	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif