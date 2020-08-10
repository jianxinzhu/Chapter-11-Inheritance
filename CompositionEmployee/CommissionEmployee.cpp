/*
name: jianxin zhu
date: aug/09/2020
*/

#include"COMMISIONEMPLOYEE.h"
#include<stdexcept>

CommissionEmployee::CommissionEmployee(const std::string& f, const std::string& l, const std::string& s, double g, double c)
{
	firstName = f;
	lastName = l;
	socialSecurityNumber = s;
	setCommissionRate(c);
	setGrossSale(g);
}
void CommissionEmployee::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}
void CommissionEmployee::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}
void CommissionEmployee::setSoicalSecurityNumber(const std::string& socialSecurityNumber)
{
	this->socialSecurityNumber = socialSecurityNumber;
}
void CommissionEmployee::setCommissionRate(double commissionRate)
{
	if (commissionRate <= 0.0)
	{
		throw std::invalid_argument("Commission Rate must be Greater than 0.0");
	}

	this->commissionRate = commissionRate;
}
void CommissionEmployee::setGrossSale(double grossSale)
{
	if (grossSale < 0.0 && grossSale > 1.0)
	{
		throw std::invalid_argument("Gross Sale must be greater than 0.0");
	}
	this->grossSale = grossSale;
}
std::string CommissionEmployee::getFirstName() const
{
	return firstName;
}
std::string CommissionEmployee::getLastName() const
{
	return lastName;
}
std::string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}
double CommissionEmployee::getGrossSale() const
{
	return grossSale;
}
double CommissionEmployee::earnning() const
{
	return getCommissionRate() * getGrossSale();
}
std::ostream& operator<<(std::ostream& output, const CommissionEmployee& employee)
{
	output << "FirstName: " << employee.getFirstName() << "\nLastName: " << employee.getLastName()
		<< "\nSSN: " << employee.getSocialSecurityNumber() << "\nGrossSale: " << employee.getGrossSale()
		<< "\nCommission Rate: " << employee.getCommissionRate()
		<< "\nEmployee Earnning: " << employee.earnning();
	output << std::endl;

	return output;
}
