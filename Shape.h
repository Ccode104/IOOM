#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>

using namespace std;

class Shape 
{
	private:
		string Name;
		float side_length;
		int Number_of_Sides;
		int radius_inscribed_circle;
	public:
		float Area();
		void set_side_length(float);
		void set_Number_of_Sides(int);
		void set_radius_inscribed_circle(float);
		void set_Name(string);
		void display();
};
#endif
