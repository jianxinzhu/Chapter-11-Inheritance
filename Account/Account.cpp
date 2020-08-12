/*
name: jianxin zhu
date: aug/11/2020
*/

#include"Account.h"
#include<stdexcept>

Account::Account(double b)
{
	if (b < 0.0)
	{
		throw std::invalid_argument("Balance Should not be zero");
	}
	balance = b;
}

double Account::credit(double balance)
{
	return this->balance += balance;
}
double Account::debit(double balance)
{
	if (balance > this->balance)
	{
		throw std::invalid_argument("Debit amount cant not exceeded account balance");
	}
	return this->balance -= balance;
}
double Account::getBalance() const
{
	return balance;
}
