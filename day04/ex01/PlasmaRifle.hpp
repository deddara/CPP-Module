#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &);
	virtual ~PlasmaRifle();
	PlasmaRifle &operator=(PlasmaRifle const &);
	void attack() const;
};

#endif