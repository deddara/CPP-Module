#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};

#endif