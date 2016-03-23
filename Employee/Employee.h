#pragma once
#include<string>
using namespace std;
class Employee
{
protected:
	string name;
	int staffNo;
 
	float sal;
public:
	Employee(string nam, int stNo);
	Employee();
	int noOfEmp();
	float salary();
	~Employee();
};

