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
	int 		_nrns_num;
	int 		_old;
	std::string	_color;



};

#endif