#pragma once
#include"Employee.h"
class HourlyEmployee : Employee
{
private:
	float hrRate;
	int hrWorked;
public:
	HourlyEmployee();
	void setHourlyRate(float HrRate);
	void setHoursWorked(int HrWorked);
	~HourlyEmployee();
};

