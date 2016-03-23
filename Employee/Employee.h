#pragma once
#include<string>
using namespace std;
class Employee
{
private: 
	
	string name;
	int staffNo;
protected: 
	float sal;
public:
	Employee(string nam, int stNo);
	Employee();
	float salary();
	~Employee();
};

