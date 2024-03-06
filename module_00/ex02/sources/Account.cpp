/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:02 by biaroun           #+#    #+#             */
/*   Updated: 2024/03/06 14:35:42 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit);
Account::~Account(void) {

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

int	    Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	    Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	    Account::getNbDeposits( void )  {
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void ) {

}

void	Account::makeDeposit( int deposit ) {
    _nbDeposits += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _nbWithdrawals = withdrawal;
}

int		Account::checkAmount( void ) const {
    std::cout << _amount << std::endl;
}

void	Account::displayStatus( void ) const {

}

void	Account::_displayTimestamp( void ) {
    
}