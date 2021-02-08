//
// Created by joel on 2/7/21.
//

#ifndef BANK_ACCOUNT_EXAMPLE_ACCOUNT_HPP
#define BANK_ACCOUNT_EXAMPLE_ACCOUNT_HPP


#include <string>

class Account
{
private:

    std::string m_Name;
    double m_Balance;

public:

    void Deposit(double bal);
    void Withdraw(double bal);

};


#endif //BANK_ACCOUNT_EXAMPLE_ACCOUNT_HPP
