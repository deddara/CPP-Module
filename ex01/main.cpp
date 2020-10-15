#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

inline bool is_integer(std::string & s)
{
	char * p;

	if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;

	strtol(s.c_str(), &p, 10);
	return (*p == 0);
}

void search_input(Contact *cont, int i)
{
	int				j = 0;
	std::string 	id;
	int 			id_num = 0;

	while (j < i)
	{
		cont[j].search_output(j);
		j++;
	}
	while (1) {
		std::cout << "Enter index for contact details: ";
		std::cin >> id;
		if (is_integer(id) == 0){
			std::cout << "Not a num" << std::endl;
			continue;
		}
		id_num = atoi(id.c_str());
		if (id_num < 0 || id_num + 1 > i)
			std::cout << "wrong id" << std::endl;
		else {
			cont[id_num].contact_output();
			break ;
		}
	}
}

void search_handler(Contact *cont, int i)
{
	if (!i)
	{
		std::cout << "There are no contacts..." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" \
	<< std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	search_input(cont, i);
}


int		main(void)
{
	std::string	cmd;
	Contact		cont[8];
	int 		i = 0;

	while (i < 9) {
		std::cout << "Enter command: ";
		getline(std::cin >> std::ws, cmd);
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
		else if (cmd.compare("SEARCH") == 0) {
			search_handler(cont, i);
		}
		else {
			std::cout << "No such command" << std::endl;
			continue;
		}
	}

	return (0);
}
