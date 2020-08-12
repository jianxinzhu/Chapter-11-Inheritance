/*
name: jianxin zhu
date: aug/11/2020
*/
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include"Account.h"

class CheckingAccount :public Account
{
public:
	CheckingAccount(double, double);
	double credit(double);
	double debit(double);

	double getFee() const;


private:
	double transationFee;
};
#endif
