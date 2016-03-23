#pragma once
#include"Employee.h"
#include<string>;
using namespace std;
class HourlyEmployee : Employee
{
private:
	float hrRate;
	int hrWorked;
public:
	HourlyEmployee(string na, int stNo) :Employee(na, stNo){};
	void setHourlyRate(float HrRate);
	void setHoursWorked(int HrWorked);
	float salary();
	~HourlyEmployee();
};

