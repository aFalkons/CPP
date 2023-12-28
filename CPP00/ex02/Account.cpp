/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:28:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/27 13:52:34 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <locale>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	int ret = Account::_nbAccounts;
	return(ret);
}
int	Account::getTotalAmount( void )
{
	int ret = Account::_totalAmount;
	return(ret);
}
int	Account::getNbDeposits( void )
{
	int ret = Account::_totalNbDeposits;
	return(ret);
}
int	Account::getNbWithdrawals( void )
{
	int ret = Account::_totalNbWithdrawals;
	return(ret);
}
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() <<
	";total:" << Account::getTotalAmount() <<
	";deposits:" << Account::getNbDeposits() <<
	";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	static int i;

	this->_accountIndex = i;
	i ++;
	this->_amount = initial_deposit;
	this->_nbAccounts = i;
	this->_nbDeposits =  0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";amount:" << this->checkAmount() << ";created" << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532]";
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits ++;
	this->_totalNbDeposits ++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";p_amount:" << (Account::checkAmount() - deposit) <<
	";deposit:" << deposit <<
	";amount:" << this->checkAmount() <<
	";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
		if (this->checkAmount() < withdrawal)
		{
				_displayTimestamp();
				std::cout << " index:" << this->_accountIndex;
				std::cout << ";p_amount:" << this->checkAmount();
				std::cout << ";withdrawal:refused" << std::endl;
				return (false);
		}
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
}
int		Account::checkAmount( void ) const
{
	int ret = this->_amount;
	return(ret);
}
void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";amount:" << this->checkAmount() <<
	";deposits:" << this->_nbDeposits <<
	";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";amount:" << this->checkAmount() <<
	";closed" << std::endl;
	return ;
}
