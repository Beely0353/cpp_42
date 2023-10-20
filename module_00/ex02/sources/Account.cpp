/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:18:02 by biaroun           #+#    #+#             */
/*   Updated: 2023/10/20 13:30:34 by biaroun          ###   ########.fr       */
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

Account( int initial_deposit );
~Account( void );

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
    cout << _amount << endl;
}

void	Account::displayStatus( void ) const {

}

void	Account::_displayTimestamp( void ) {
    
}