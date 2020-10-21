#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>

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
};

#endif