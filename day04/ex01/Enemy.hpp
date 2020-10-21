#ifndef ENEMY_H
# define ENEMY_H
# include <string>
# include <iostream>

class Enemy{

private:
	int			_hp;
	std::string _type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &);
	~Enemy();
	std::string 	getType() const;
	int 			getHP() const;
	virtual void 	takeDamage(int);

};

#endif