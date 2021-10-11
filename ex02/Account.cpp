# include <iostream>
#include "Account.hpp"
#include <ctime>

//Inicialize static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor.
Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    t::_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created"<< std::endl;    
}

// Destructor:
Account::~Account() {
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << t::_amount << ";closed"<< std::endl; 
}

// SET=============================================================

// GET=============================================================
int	Account::getNbAccounts( void )
    {return (Account::_nbAccounts);}
int	Account::getTotalAmount( void )
    {return (Account::_totalAmount);}
int	Account::getNbDeposits( void )
    {return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals( void )
    {return (Account::_totalNbWithdrawals);}

// FUNCTIONS =============================================================================
void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";p_amount:" << this->_amount
        << ";deposit:" << deposit;
    this->_nbDeposits += 1;
    this->_amount += deposit;
    std::cout << ";amount:" 
        << this->_amount
        << ";nb_deposit:" 
        << this->_nbDeposits
        << std::endl;    
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";p_amount:" << this->_amount
        << ";withdrawal:" << withdrawal;
    if ((this->checkAmount() - withdrawal) < 0)
    {
        std::cout << ":refused" << std::endl; 
        return (false);
    }
    this->_nbWithdrawals += 1;
    this->_amount -= withdrawal;
    std::cout << ";amount:" 
        << this->_amount
        << ";nb_withdrawals:" 
        << this->_nbWithdrawals
        << std::endl;    
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals
        << std::endl;
}

void	Account::_displayTimestamp( void )
{
    char       buf[80];
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", now);
    std::cout << buf;
    return ;
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
        << ";total:" << getTotalAmount()
        << ";deposits:" << getNbDeposits()
        << ";withdrawals:" << getNbWithdrawals()
        << std::endl;
    return ;
}