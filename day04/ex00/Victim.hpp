#ifndef VICTIM_H
# define VICTIM_H
# include <string>

class Victim{

private:
	std::string _name;

public:
	Victim(std::string name);
	Victim(Victim const &);
	~Victim();
	Victim & operator=(const Victim &);
	void introduce() const;

	std::string getName()const;
};

std::ostream &operator<<(std::ostream &o, const Victim &);

#endif