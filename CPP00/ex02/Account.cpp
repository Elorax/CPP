/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:52:28 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:18:08 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << ++(this->_nbDeposits) << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << ++(this->_nbWithdrawals) << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "["; 
	std::cout << (now->tm_year + 1900);
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << (now->tm_mon + 1);
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << now->tm_mday;
	std::cout << "_";
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << now->tm_hour;
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << now->tm_min;
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << now->tm_sec;
	std::cout << "] ";
}

Account::Account()
{
}

int	Account::checkAmount(void) const
{
	//unused atm
	return 0;
}
void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account()
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}


