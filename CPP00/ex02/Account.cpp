/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:19:48 by gmary             #+#    #+#             */
/*   Updated: 2022/04/14 14:52:51 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/*
	FUNCTION_OBJECT std::for_each( IT begin, IT end, FUNCTION_OBJECT fo );

	this->_amount = initial_deposit;
	peut tres bien sscrire comme ceci ???:
	Account::_amount = initial_deposit;
*/



static void	Account::displayAccountsInfos(void)
{
	std::cout << "Number of account:" << itoa(Account::getNbaccounts()) << std::endl;
	std::cout << "Total amount:" << itoa(Account::getTotalAmount()) << std::endl;
	std::cout << "Number of deposit:" << itoa(Account::getNbDeposits()) << std::endl;
	std::cout << "Number of withdrawals:" << itoa(Account::getNbWithdrawals()) << std::endl;
}

static int	Account::getNbaccounts( void )
{
	return Account::_nbAccounts;
}

static int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

static int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

static int	Account::getNbWithdrawals( void )
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