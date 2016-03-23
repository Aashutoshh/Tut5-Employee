#include "Employee.h"
#include "CommisionEmployee.h"
#include "HourlyEmployee.h"
#include "SalaryEmployee.h"

int main()
{//array of employees 

	

	//commision employee
	CommisionEmployee cEmp("Tom", 1);
	cEmp.setBaseSalary(20000.00);
	cEmp.setRate(500.00);
	cEmp.setRevenue(5000.00);
	float sal1 = cEmp.salary();

	//Hourly empolyee
	HourlyEmployee hEmp("Jane",2);
	hEmp.setHourlyRate(1000.00);
	hEmp.setHoursWorked(50);
	float sal2 = hEmp.salary();

	//Salary employeee
	SalaryEmployee sEmp("MerryM" ,3);
	sEmp.setSalary(50000.00);
	float sal3 = sEmp.salary();


	//store into arrays
	
	//display 




}