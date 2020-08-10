/*
name: jianxin zhu
date: aug/09/2020
*/

#ifndef BASEPLUSEMPLOYEE_H
#define BASEPLUSEMPLOYEE_H

#include"COMMISIONEMPLOYEE.h"


class BasePlusEmployee
{
	friend std::ostream& operator<<(std::ostream&, const BasePlusEmployee&);
public:
	BasePlusEmployee(const CommissionEmployee&, double);

	void setBaseSalary(double);
	double getBaseSalary() const;

	double earnning() const;


private:
	double baseSalary;
	CommissionEmployee employee;
};
#endif
