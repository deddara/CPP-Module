#include "Account.class.hpp"
#include <iostream>
#include <iostream>
#include <ctime>

int i = -1;
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

std::string convertToString(char* a, int size)
{
	int i;
	std::string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}

void 	get_time(void)
{
	const int MAXLEN = 80;
	char s[MAXLEN];
	std::string str;
	time_t t = time(0);

	strftime(s, MAXLEN, "%Y%m%d", localtime(&t));
	std::cout << "[" << s << "] ";
	strftime(s, MAXLEN, "%T", localtime(&t));
	str = convertToString(s, strlen(s));
	str.erase(std::remove(str.begin(), str.end(), ':'), str.end());
	std::cout << "[" << str << "] ";
}


Account::Account(int initial_deposit) : _amount(initial_deposit){

	i++;
	get_time();
	this->_accountIndex = i;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << this->_amount << std::endl;
	std::cout << this->_accountIndex << std::endl;

	return ;
}

Account::~Account(void){
	return ;
}
