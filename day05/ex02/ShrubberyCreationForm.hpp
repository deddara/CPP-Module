#ifndef ShrubberyCreationForm_h
# define ShrubberyCreationForm_h
# include "main.hpp"
# include <string>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
};

#endif