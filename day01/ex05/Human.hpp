#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human{

public:
	std::string identify () const;
	const Brain 	&getBrain() const;
	Human(void);
	~Human(void);

private:
	const Brain br;

};

#endif