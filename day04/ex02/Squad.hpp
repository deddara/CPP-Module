#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct	s_squad
{

		ISpaceMarine	*unit;
		struct s_squad	*next;

}				t_squad;


class Squad : public ISquad
{
private:
	t_squad *squad;
	static int count;

public:
	Squad();
	Squad(Squad const &);
	virtual ~Squad();

	int				getCount() const;
	int				push(ISpaceMarine*);
	ISpaceMarine*	getUnit(int) const;

};

#endif