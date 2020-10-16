#ifndef BRAIN_H
# define BRAIN_H
# include <string>

class Brain{

public:

	std::string identify() const;
	Brain();
	~Brain();

private:
	int			_size;
	std::string	_color;
	int 		_nrns_num;
	int 		_old;
};

#endif