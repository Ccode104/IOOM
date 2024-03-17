#include"Person.h"
#include<iostream>

Person::Person(string name="\0",int age=-1):Name(name),Age(age)


void Person::display()
{
	cout<<"Name:"<<Name<<endl;
	cout<<"Age:"<<Age<<endl;
}

