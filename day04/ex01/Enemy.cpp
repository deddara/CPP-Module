#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type) {
	return ;
}

Enemy::Enemy(const Enemy &cpy) {
	*this = cpy;
}

Enemy::~Enemy() {return ;}

int		Enemy::getHP() const { return _hp;}

std::string const &Enemy::getType() const { return _type;}

Enemy &Enemy::operator=(const Enemy &sec_arg) {
	_hp = sec_arg.getHP();
	_type = sec_arg.getType();
	return (*this);
}

void Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		return;
	else
	{
		_hp -= dmg;
	}
}