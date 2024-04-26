#include<iostream>
#include"Vector.h"

using namespace std;

int main()
{
	Vector v1,v2;

	v1.set_dim(2).set_comp(3,0).set_comp(4,1);
	v2.set_dim(2).set_comp(4,0).set_comp(5,1);

	v1.print_vector();
	v2.print_vector();

	Vector v3;
	cout<<"\nDot Product"<<endl;
	v3.dot_prod(v1,v2);
	v3.print_vector();

	cout<<endl<<"Sum"<<endl;
	v3.add(v1,v2);
	v3.print_vector();

	cout<<endl<<"Difference"<<endl;
	v3.sub(v1,v2);
	v3.print_vector();

	cout<<endl<<"Scalar Multiple"<<endl;
	v3.scalar_mul(2,v1);
	v3.print_vector();

	v1=v2.add(v3,v2);
	v1.print_vector();
	v2.print_vector();
	v3.print_vector();



	return 0;
}