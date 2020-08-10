/*
name: jianxin zhu
date: aug/09/2020
*/

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include<string>
#include<iostream>

class CommissionEmployee
{
	friend std::ostream& operator<<(std::ostream&, const CommissionEmployee&);
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&,
		double = 0.0, double = 0.0);
	void setFirstName(const std::string&);
	void setLastName(const std::string&);
	void setSoicalSecurityNumber(const std::string&);
	void setGrossSale(double);
	void setCommissionRate(double);


	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getSocialSecurityNumber() const;

	double getGrossSale() const;
	double getCommissionRate() const;
	double earnning() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSale;
	double commissionRate;

};
#endif
