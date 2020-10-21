#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include <ostream>
# include "Victim.hpp"

class Sorcerer{

private:
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &);
	Sorcerer & operator=(Sorcerer const &);
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;
	void introduce()const;
	void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif