#include "CommisionEmployee.h"
#include <string>
using namespace std;

/*CommisionEmployee::CommisionEmployee(string na , int stNo ) :Employee(na,stNo )
{
	name = na;
	staffNo = stNo;
}*/

void CommisionEmployee::setBaseSalary(float bs)
{
	baseSalary = bs;
}
void CommisionEmployee::setRate(float rat)
{
	rate = rat;
}

void CommisionEmployee::setRevenue(float rev){
	revenue = rev;
}

float CommisionEmployee::salary()
{
	return baseSalary + rate * revenue;
}
CommisionEmployee::~CommisionEmployee()
{
}
