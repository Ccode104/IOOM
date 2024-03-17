#include"Shape.h"
#include<iostream>

using namespace std;

void Shape::set_side_length(float length)
{
	side_length=length;
}

void Shape::set_Number_of_Sides(int num)
{
	Number_of_Sides=num;
}
void Shape::set_radius_inscribed_circle(float rad)
{
	radius_inscribed_circle=rad;
}
float Shape::Area()
{    
	float area;
	area=(Number_of_Sides/2)*side_length*radius_inscribed_circle;
	return area;
}

void Shape::set_Name(string name)
{
	Name=name;
}
void Shape::display()
{
	cout<<"Name: "<<Name<<endl;
	cout<<"Area: "<<Area()<<endl;
}

