/*
name: jianxin zhu
date: aug/11/2020
*/

#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include"Account.h"
#include<string>

class SavingAccount : public Account
{
public:
	SavingAccount(double, double);

	double calculateInterest(double);
private:
	double interestRate;
};
#endif
