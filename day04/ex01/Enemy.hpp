#ifndef ENEMY_H
# define ENEMY_H
# include <string>
# include <iostream>

class Enemy{

private:
	Enemy();

protected:
	int			_hp;
	std::string _type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &);
	std::string 	const &getType() const;
	int 			getHP() const;
	virtual void 	takeDamage(int);

};

#endif