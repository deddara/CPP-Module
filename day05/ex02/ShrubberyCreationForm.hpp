#ifndef ShrubberyCreationForm_h
# define ShrubberyCreationForm_h
# include "main.hpp"
# include "Form.hpp"
# include <string>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
};

#endif