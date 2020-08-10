/*
name: jianxin zhu
date: aug/09/2020
*/

#include"BasePlusEmployee.h"

BasePlusEmployee::BasePlusEmployee(const CommissionEmployee& em, double salary)
	:employee(em)
{
	setBaseSalary(salary);
}
void BasePlusEmployee::setBaseSalary(double baseSalary)
{
	if (baseSalary < 0.0)
	{
		throw std::invalid_argument("Base Salary Can not be Zero");
	}
	this->baseSalary = baseSalary;
}
double BasePlusEmployee::getBaseSalary() const
{
	return baseSalary;
}
double BasePlusEmployee::earnning() const
{
	return employee.earnning() + getBaseSalary();
}
std::ostream& operator<<(std::ostream& output, const BasePlusEmployee& staff)
{
	output << staff.employee;
	output << "Plus Base Salary: " << staff.earnning();

	return output;
}
