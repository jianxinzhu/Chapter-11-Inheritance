/*
name: jianxin zhu
date: aug/11/2020
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double = 0.0);

	double credit(double);
	double debit(double);


	double getBalance() const;

private:
	double balance;
};
#endif
