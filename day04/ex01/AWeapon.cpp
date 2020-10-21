#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) { return ;}

AWeapon::AWeapon(const AWeapon &cpy) {
	*this = cpy;
}

AWeapon::~AWeapon() { return; }

std::string AWeapon::getName() const {
	return (_name);
}

int 		AWeapon::getAPCost() const {
	return (_apcost);
}

int			AWeapon::getDamage() const {
	return (_damage);
}

AWeapon &AWeapon::operator=(const AWeapon &wp) {
	_name = wp.getName();
	_damage = wp.getDamage();
	_apcost = wp.getAPCost();
}