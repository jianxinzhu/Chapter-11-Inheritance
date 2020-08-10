/*
name: jianxin zhu
date: aug/09/2020
*/
#include<iostream>
#include"BasePlusEmployee.h"
#include"COMMISIONEMPLOYEE.h"

using namespace std;

int main()
{
	CommissionEmployee staff{ "John","Paul","222-222-3333",10000, 0.1 };
	BasePlusEmployee staff2{ staff,600 };

	cout << staff;
	cout << "--------------------------\n";
	cout << staff2;
}
