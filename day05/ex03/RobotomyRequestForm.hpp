#ifndef robotomy_h
# define robotomy_h
# include "main.hpp"
# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form
{

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &);
	virtual ~RobotomyRequestForm();

	virtual void	execute(Bureaucrat const & executor) const;
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
};


#endif