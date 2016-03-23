#include "Employee.h"
#include <string>
using namespace std;
static int noOfEmployees = 0;
Employee::Employee()
{

}
Employee::Employee(string na , int stNo)
{
	noOfEmployees++;
	name = na;
	staffNo = stNo;
}

float Employee::salary(){
	
}

Employee::~Employee()
{
}
