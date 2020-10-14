#include "Account.class.hpp"
#include <iostream>

int i = -1;
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit){

	i++;
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
