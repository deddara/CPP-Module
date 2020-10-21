#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"

class PowerFist : public AWeapon{

public:
	PowerFist();
	PowerFist(PowerFist const &);
	~PowerFist();
	PowerFist &operator=(PowerFist const &);
	void attack() const;

};

#endif