#include <iostream>
#include <string>
#include "Contact.class.hpp"

void add_handler(Contact cont)
{
	cont.f_name = "sraka";
	std::cout << cont.f_name << std::endl;
}


int		main(void)
{
	std::string	cmd;
	Contact		cont[8];
	int 		i = 0;

	while (i < 8) {
		std::cout << "Enter command: ";
		std::cin >> cmd;
		if (cmd.compare("EXIT") == 0)
			return (0);
		else if (cmd.compare("ADD") == 0)
			add_handler(cont[i]);
		else if (cmd.compare("SEARCH") == 0)
			return (2);
		else
			continue;
	}

	return (0);
}


//int main(void)
//{
//	Sample example;
//	Sample	*examplep = &example;
//	std::string str;
//
//	int 	Sample::*p = NULL;
//	void 	(Sample::*f)(void)const;
//
//	p = &Sample::foo;
//
//	std::cin >> str;
//	std::cout << example.foo << std::endl;
//	example.*p = 32;
//	std::cout << example.foo << std::endl;
//	examplep->*p = 42;
//	std::cout << example.foo << std::endl;
//
//	f = &Sample::func;
//	(example.*f)();
//	(examplep->*f)();
//	return (0);
//}