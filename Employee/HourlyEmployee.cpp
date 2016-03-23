#include "HourlyEmployee.h"



/*HourlyEmployee::HourlyEmployee(string na ,int stNo) :Employee(na ,stNo)
{
	name = na;
	staffNo = stNo;
}*/

void HourlyEmployee::setHourlyRate(float HrRate)
{
	hrRate = HrRate;
}

void HourlyEmployee::setHoursWorked(int HrWorked)
{
	hrWorked = HrWorked;
}
float HourlyEmployee::salary()
{
	return hrRate*hrWorked;
}
HourlyEmployee::~HourlyEmployee()
{
}
