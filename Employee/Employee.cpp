#include "Employee.h"

#include <string>
using namespace std;
static int noOfEmployees = 0;
Employee::Employee()
{
	noOfEmployees++;
}
Employee::Employee(string na , int stNo)
{
	noOfEmployees++;
	name = na;
	staffNo = stNo;
}

 float Employee::salary(){
	return sal;
}

int Employee::noOfEmp(){ return noOfEmployees; }
Employee::~Employee()
{
}
