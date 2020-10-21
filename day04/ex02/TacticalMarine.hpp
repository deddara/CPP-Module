#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	virtual ~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine const &);
	TacticalMarine* clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};

#endif