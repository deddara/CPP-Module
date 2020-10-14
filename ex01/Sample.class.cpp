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
	std::cin >> this->f_name;
	std::cout << "Enter last name: ";
	std::cin >> this->l_name;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter login: ";
	std::cin >> this->login;
	std::cout << "Enter postal address: ";
	std::cin >> this->post_addr;
	std::cout << "Enter email address: ";
	std::cin >> this->email_addr;
	std::cout << "Enter phone number: ";
	std::cin >> this->ph_num;
	std::cout << "Enter birth date: ";
	std::cin >> this->bday_date;
	std::cout << "Enter favorite meal: ";
	std::cin >> this->fav_meal;
	std::cout << "Enter underwear color: ";
	std::cin >> this->undr_clr;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->drkst_scrt;
}

void 	Contact::search_output(int id) const {
	std::cout << std::setw(10) << id << "|" << std::setw(10) \
	<< this->f_name << "|" << std::setw(10) << this->l_name  << "|"\
	<< std::setw(10) << this->nickname << std::endl;
}