#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
//Sample::Sample(void) : foo(42) {
//
//	return;
//}
//
//Sample::~Sample(void){
//	std::cout << "destructor called" << std::endl;
//	return ;
//}
//
void 	Contact::add_contact(void) {

	std::cout << "Enter first name: ";
	std::getline (std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') ,this->f_name);
	std::cout << "Enter last name: ";
	std::getline (std::cin,this->l_name);
	std::cout << "Enter nickname: ";
	std::getline (std::cin ,this->nickname);
	std::cout << "Enter login: ";
	std::getline (std::cin,this->login);
	std::cout << "Enter postal address: ";
	std::getline (std::cin ,this->post_addr);
	std::cout << "Enter email address: ";
	std::getline (std::cin ,this->email_addr);
	std::cout << "Enter phone number: ";
	std::getline (std::cin ,this->ph_num);
	std::cout << "Enter birth date: ";
	std::getline (std::cin ,this->bday_date);
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin ,this->fav_meal);
	std::cout << "Enter underwear color: ";
	std::getline (std::cin ,this->undr_clr);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin ,this->drkst_scrt);
}

void 	Contact::search_output(int id) const {

	std::string f_name;
	std::string l_name;
	std::string nickname;

	f_name = this->f_name;
	l_name = this->l_name;
	nickname = this->nickname;

	if (f_name.size() > 10) {
		f_name.resize(9);
		f_name += '.';
	}
	if (l_name.size() > 10) {
		l_name.resize(9);
		f_name += '.';
	}
	if (nickname.size() > 10) {
		nickname.resize(9);
		nickname += '.';
	}

	std::cout << std::setw(10) << id << "|" << std::setw(10) \
	<< f_name << "|" << std::setw(10) << l_name  << "|"\
	<< std::setw(10) << nickname << std::endl;
}