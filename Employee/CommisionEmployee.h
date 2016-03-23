#pragma once
#include "Employee.h"
class CommisionEmployee :Employee
{
private :
	float baseSalary , rate , revenue;
public:
	void setBaseSalary(float bs);
	void setRate(float rat);
	void setRevenue(float rev);
	float salary();
	CommisionEmployee(string na, int stNo) :Employee(na, stNo){};
	~CommisionEmployee();
};

