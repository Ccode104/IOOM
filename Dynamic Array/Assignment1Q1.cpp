#include<iostream>
#include"DynamicArray.h"

using namespace std;

int main()
{

	DynamicArray a;//Default Constructor invoked
	cout<<"Content of a"<<endl;
	a.displayData();

	DynamicArray b(5);//Parametrised Constructor invoked
	cout<<"Content of b"<<endl;
	b.displayData();

	DynamicArray c(b);//Copy Constructor invoked
	cout<<"Content of c"<<endl;
	c.displayData();
	
	//Test setdata()
	int array[4];
	unsigned int size;

	cout<<"Enter the size of the array"<<endl;
	cin>>size;

	cout<<"Enter the elements now"<<endl;

	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	cout<<"Content of c after invoking c.setData()"<<endl;
	c.setData(array,size);
	c.displayData();

	//Deep copy behaviour illustrated
	//c is a copy of b

	int temp={0};
	unsigned int n=1;
	cout<<"Content of b after invoking b.setData() again with an array={0}"<<endl;
	b.setData(&temp,n);
	b.displayData();
	cout<<"Content of c not changed"<<endl;
	c.displayData();
	return 0;
}