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
	t_squad		*_squad;
	static int	_count;

public:
	Squad();
//	Squad(Squad const &);
	virtual ~Squad();

	int				getCount() const;
	int				push(ISpaceMarine*);
	ISpaceMarine*	getUnit(int) const;

	t_squad 		*newUnit(ISpaceMarine*);
	bool 			checkExist(ISpaceMarine*);

};

#endif