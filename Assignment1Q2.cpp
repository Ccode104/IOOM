#include"Shape.h"
#include<iostream>

using namespace std;

int main()
{
	Shape s1,s2;

	s1.set_Name("Square");
	s1.set_side_length(10);
	s1.set_Number_of_Sides(4);
	s1.set_radius_inscribed_circle(5);

	s2.set_Name("Triangle");
	s2.set_side_length(10);
	s2.set_Number_of_Sides(3);
	s2.set_radius_inscribed_circle(5);

	s1.display();
	s2.display();

	return 0;
}


