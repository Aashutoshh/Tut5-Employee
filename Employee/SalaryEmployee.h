#pragma once
#include "Employee.h"

class SalaryEmployee : Employee
{
private:
	
public:
	SalaryEmployee(string na, int stNo) :Employee(na, stNo){};
	void setSalary(float s);
	float salary();
	~SalaryEmployee();
};

