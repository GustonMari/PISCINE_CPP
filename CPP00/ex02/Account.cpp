/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:19:48 by gmary             #+#    #+#             */
/*   Updated: 2022/04/15 11:59:47 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "time.h"
#include <iostream>
/*
	FUNCTION_OBJECT std::for_each( IT begin, IT end, FUNCTION_OBJECT fo );

	this->_amount = initial_deposit;
	peut tres bien sscrire comme ceci:
	Account::_amount = initial_deposit;

	When we declare a member of a class as static
	it means no matter how many objects of the class are created, 
	there is only one copy of the static member.

		int		checkAmount( void ) const;
		const veut dire quelon ne modifie pas la valeur dune variable de la class dans cette focntion
		
	lorsquil y a une static dans une classe il faut la definir dans le fichier .cpp comme si dessous:
		int	Account::_nbAccounts = 0;
		int Account::_totalAmount = 0;
		int Account::_totalNbDeposits = 0;
		int Account::_totalNbWithdrawals = 0;
	en c++ on peut ecrire true ou false sans MAJ pour les booleens

	A static function is a member function of a class 
	that can be called even when an object of the class is not initialized. 
	A static function cannot access any variable of its class except for static variables.
	a regular function can access static variables but a static function cannot access regular variables
	Can't call any other class functions that are not static.
	Can't access non static class data members.
	Can instantiate an object via new class() when constructor is private/protected. E.g. a factory function
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
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
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
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbWithdrawals -= _nbWithdrawals;
	_totalNbDeposits -= _nbDeposits;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}