/*
name: jianxin zhu
date: aug/11/2020
*/

#include"CheckAccount.h"
#include<stdexcept>

CheckingAccount::CheckingAccount(double balance, double fee)
	:Account(balance)
{
	transationFee = fee;
}

double CheckingAccount::credit(double balance)
{
	return Account::credit(balance - getFee());
}
double CheckingAccount::debit(double balance)
{
	if (Account::debit(balance) >= getFee())
	{
		return Account::debit(getFee());
	}
	else
	{
		throw std::invalid_argument("Withdraw amount exceed");
	}
}
double CheckingAccount::getFee() const
{
	return transationFee;
}
