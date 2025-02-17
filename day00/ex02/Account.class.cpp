#include "Account.class.hpp"
#include <iostream>
#include <iostream>
#include <ctime>

int i = -1;
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
//int	Account::_count = 0;

std::string convertToString(char* a, int size)
{
	int i;
	std::string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}

//int		Account::checkAmount( void ) const{
//	++_count;
//	return (_count);
//}

int Account::getNbAccounts( void ){
//	std::cout << _nbAccounts << std::endl;
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalAmount);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	const int MAXLEN = 80;
	char s[MAXLEN];
	std::string str;
	time_t t = time(0);

	strftime(s, MAXLEN, "%Y%m%d", localtime(&t));
	std::cout << "[" << s << "_";
	strftime(s, MAXLEN, "%T", localtime(&t));
	str = convertToString(s, strlen(s));
	str.erase(std::remove(str.begin(), str.end(), ':'), str.end());
	std::cout << str << "] ";
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();

	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount \
		<< ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "index:" <<  this->_accountIndex << ";p_amount:" << this->_amount \
		<< ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (1);
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" \
	<< this->_nbDeposits << std::endl;

}

void Account::displayAccountsInfos (void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount \
	<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


Account::Account(int initial_deposit) : _amount(initial_deposit){

	i++;
	Account::_displayTimestamp();
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = i;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";closed" << std::endl;
	return ;
}

