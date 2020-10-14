#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

void search_handler(Contact *cont, int i)
{
	int j = 0;

	if (!i)
	{
		std::cout << "There are no contacts..." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" \
	<< std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	while (j < i)
	{
		cont[j].search_output(j);
		j++;
	}
}


int		main(void)
{
	std::string	cmd;
	Contact		cont[8];
	int 		i = 0;

	while (i < 9) {
		std::cout << "Enter command: ";
		getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0)
			return (0);
		else if (cmd.compare("ADD") == 0)
		{
			if (i == 8)
			{
				std::cout << "You've reached your limit!!!" << std::endl;
				continue;
			}
			cont[i++].add_contact();
		}
		else if (cmd.compare("SEARCH") == 0)
			search_handler(cont, i);
		else {
			std::cout << "No such command" << std::endl;
			continue;
		}
	}

	return (0);
}
