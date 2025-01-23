/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codekiwi <codekiwi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:29:47 by codekiwi          #+#    #+#             */
/*   Updated: 2025/01/24 00:24:26 by codekiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout
        << "accounts:" << Account::getNbAccounts() << ";"
        << "total:" << Account::getTotalAmount() << ";"
        << "deposits:" << Account::getNbDeposits() << ";"
        << "withdrawals:" << Account::getNbWithdrawals()
        << std::endl;
}

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    std::cout
        << "["
        << 1900 + localTime->tm_year
        << std::setw(2) << std::setfill('0') << 1 + localTime->tm_mon
        << std::setw(2) << std::setfill('0') << localTime->tm_mday
        << "_"
        << std::setw(2) << std::setfill('0') << localTime->tm_hour
        << std::setw(2) << std::setfill('0') << localTime->tm_min
        << std::setw(2) << std::setfill('0') << localTime->tm_sec
        << "] ";
}

Account::Account(int initial_deposit)
    :   _accountIndex(Account::getNbAccounts()),
        _amount(initial_deposit),
        _nbDeposits(0),
        _nbWithdrawals(0)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    Account::_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->checkAmount() << ";"
        << "created"
        << std::endl;
}

Account::~Account() {
    Account::_totalAmount -= this->checkAmount();
    Account::_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->checkAmount() << ";"
        << "closed"
        << std::endl;
}

int Account::checkAmount(void) const {
    return this->_amount;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->checkAmount() << ";"
        << "deposits:" << this->_nbDeposits << ";"
        << "withdrawals:" << this->_nbWithdrawals
        << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = this->checkAmount();

    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    Account::_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << p_amount << ";"
        << "deposit:" << deposit << ";"
        << "amount:" << this->checkAmount() << ";"
        << "nb_deposits:" << this->_nbDeposits
        << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amout = this->checkAmount();

    Account::_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << p_amout << ";";
    if (withdrawal > this->checkAmount()) {
        std:: cout << "withdrawal:refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout
        << "withdrawal:" << withdrawal << ";"
        << "amount:" << this->checkAmount() << ";"
        << "nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
    return true;
}
