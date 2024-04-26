#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>

using namespace std;

class Square 
{
	private:
		float side_length;
	public:
		float Area();
		void set_side_length(float);
};
