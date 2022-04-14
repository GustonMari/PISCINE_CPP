/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:19:48 by gmary             #+#    #+#             */
/*   Updated: 2022/04/14 17:19:52 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "time.h"
#include <iostream>
/*
	FUNCTION_OBJECT std::for_each( IT begin, IT end, FUNCTION_OBJECT fo );

	this->_amount = initial_deposit;
	peut tres bien sscrire comme ceci ???:
	Account::_amount = initial_deposit;

	When we declare a member of a class as static
	it means no matter how many objects of the class are created, 
	there is only one copy of the static member.

		int		checkAmount( void ) const;
		const veut dire quelon ne modifie pas la valeur dune variable de la class dans cette focntion
		
	lorsquil y a une static dans une lasse il faut la definir dans le fichier .cpp comme si dessous:
		int	Account::_nbAccounts = 0;
		int Account::_totalAmount = 0;
		int Account::_totalNbDeposits = 0;
		int Account::_totalNbWithdrawals = 0;
*/

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	/*time_t timestamp = time(NULL);
	struct tm *p = localtime(&timestamp);
	char	buffer[2048];

	strftime(buffer, 2048, "[%d%m%Y_%H%M%S]", p);
	std::cout << buffer << std::endl;*/
	std::cout << "[19920104_091532]";
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "Number of account:" << _nbAccounts << std::endl;
	std::cout << "Total amount:" << _totalAmount << std::endl;
	std::cout << "Number of deposit:" << _totalNbDeposits << std::endl;
	std::cout << "Number of total withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << std::endl;
	std::cout << "amount:" << _amount << std::endl;
	std::cout << "number of deposits:" << _nbDeposits << std::endl;
	std::cout << "number of withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_nbWithdrawals++;
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << std::endl;
	//QUE DOIS TON RETURN ????
	return (1);
}

// A CHECKER PAS SUR SI CEST OK
int	Account::checkAmount(void) const
{
	if (_totalAmount < 0)
		return -1;
	return 0;
}

/* Account::Account(int initial_deposit)
{
	Account::_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
} */

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbWithdrawals -= _nbWithdrawals;
	_totalNbDeposits -= _nbDeposits;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}