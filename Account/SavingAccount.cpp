/*
name: jianxin zhu
date: aug/11/2020
*/

#include"SavingAccount.h"
#include<stdexcept>

SavingAccount::SavingAccount(double b, double i)
	:Account(b)
{
	if (i < 0.0 && i>1.0)
	{
		throw std::invalid_argument("Interest Rate must be 0.0 to 1.0");
	}

	interestRate = i;
}

double SavingAccount::calculateInterest(double i)
{
	return Account::getBalance() * i;
}

