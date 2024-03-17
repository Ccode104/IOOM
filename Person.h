#ifndef _PERSON_H_
#define _PERSON_H_

#include<iostream>

using namespace std;

class Person
{
	private:
		string Name;
		int Age;
	public:
		Person(string,int);
		void display();
};
#endif
