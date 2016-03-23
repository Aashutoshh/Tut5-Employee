#include "SalaryEmployee.h"
#include "Employee.h"



/*SalaryEmployee::SalaryEmployee(string na, int stNo) :Employee(na,stNo)
{
	name = na; 
	staffNo = stNo;
}
*/
void SalaryEmployee::setSalary(float s){
 sal = s;
}
float SalaryEmployee::salary(){
	return sal;
}
SalaryEmployee::~SalaryEmployee()
{
}
