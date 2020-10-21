#ifndef VICTIM_H
# define VICTIM_H
# include <string>

class Victim{

protected:
	std::string _name;

public:
	Victim(std::string name);
	Victim(Victim const &);
	~Victim();
	Victim & operator=(const Victim &);
	void introduce() const;

	std::string		getName()const;
	virtual void	getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, const Victim &);

#endif