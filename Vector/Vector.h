#ifndef _VECTOR_H_
#define _VECTOR_H_

#include<iostream>

using namespace std;

class Vector
{
private:

	unsigned int dim;
	int *comp;

public:

	/*Constructor*/
	Vector();

	/*Getter methods*/
	unsigned int get_dim()const;
	int get_comp(const int&)const;

	/*Setter Methods*/
	Vector& set_dim(const unsigned int&);
	Vector& set_comp(const int&,const int&);

	/*Methods*/
	void add(const Vector&,const Vector&);
	void sub(const Vector&,const Vector&);
	void dot_prod(const Vector&,const Vector&);
	void scalar_mul(const int&,const Vector&);
	void print_vector();

	/*Operator Overloading*/
	Vector& operator=(Vector const&);
	

};



#endif