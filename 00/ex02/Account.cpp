/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:00:13 by mhotting          #+#    #+#             */
/*   Updated: 2024/09/20 00:04:07 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << checkAmount()
		<< ";created"
		<< std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;
	_totalAmount -= checkAmount();
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << checkAmount()
		<< ";closed"
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	const int	p_amount = checkAmount();

	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << checkAmount()
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	const int	p_amount = checkAmount();

	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:";
	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout
		<< withdrawal
		<< ";amount:" << checkAmount()
		<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
	return (true);
}

int		Account::checkAmount(void) const {
	return (_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << checkAmount()
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" <<	_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    std::cout
		<< "["
		<< (localTime->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << localTime->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << localTime->tm_hour
		<< std::setw(2) << std::setfill('0') << localTime->tm_min
		<< std::setw(2) << std::setfill('0') << localTime->tm_sec
		<< "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
