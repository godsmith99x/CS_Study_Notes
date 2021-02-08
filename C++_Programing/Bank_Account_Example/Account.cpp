//
// Created by joel on 2/7/21.
//

#include "Account.hpp"

void Account::Deposit(double bal)
{
    m_Balance += bal;
}

void Account::Withdraw(double bal)
{
    m_Balance -= bal;
}
