#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

using namespace std;

class Employee {
	private:
		int Id;
		string Name;
		float Salary;
	public:
		void display();
		void setter(int,string,float);
};
#endif
