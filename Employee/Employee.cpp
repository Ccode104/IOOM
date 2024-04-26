#include"Employee.h"
#include<iostream>

using namespace std;

void Employee::setter(int id,string name,float salary)
{
	Id=id;
	Name=name;
	Salary=salary;
}
void Employee::display()
{
	cout<<"Employee Details:"<<endl;
	cout<<"Id:"<<Id<<endl;
	cout<<"Name:"<<Name<<endl;
	cout<<"Salary"<<Salary<<endl;
}
	
