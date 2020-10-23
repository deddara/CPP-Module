#ifndef PresidentialPardonForm_h
# define PresidentialPardonForm_h
# include "main.hpp"
# include "Form.hpp"
# include <string>

class PresidentialPardonForm  : public Form
{

public:
	PresidentialPardonForm (std::string target);
	PresidentialPardonForm (PresidentialPardonForm  const &);
	virtual ~PresidentialPardonForm ();

	virtual void	execute(Bureaucrat const & executor) const;
	PresidentialPardonForm  &operator=(PresidentialPardonForm  const &);
};



#endif
