#include<iostream>
using namespace std;

class Human {
	private:
		string name;
		int age;
	public:
		Human(string, int);
		void walk();
		void talk();
		void show_details();
};