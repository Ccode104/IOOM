#include<iostream>
#include<stdlib.h>
#include"DynamicArray.h"

using namespace std;

DynamicArray::DynamicArray()
{
	cout<<"Inside the Default Constructor DyanmicArray()"<<endl;
	this->arr=NULL;
	this->size=0;
	this->empty='y';
}
DynamicArray::DynamicArray(unsigned int n=0)
{
	cout<<"Inside the parametrised constructor DynamicArray(unsigned int n=0)"<<endl;
	this->size=n;
	this->arr= new int[this->size];
	this->empty='y';
}
DynamicArray::~DynamicArray()
{
	cout<<"Inside the destructor ~DynamicArray()"<<endl;
	delete[] arr;
}

DynamicArray::DynamicArray(DynamicArray& t)
{
	cout<<"Inside the copy constructor DynamicArray(DyanmicArray& t)"<<endl;
	this->size=t.size;
	this->arr=new int[t.size];
	setData(t.arr,t.size);
	this->empty=t.empty;
}

void DynamicArray::setData(int *a,unsigned int s)
{
	for(int i=0;i<this->size;i++)
	{
		arr[i]=a[i];
	}
	if(this->size<s)
	{
		cout<<"Overflow"<<endl;
	}
	else{
		this->size=s;
	}
	if(this->size==0)
		this->empty='y';
	else
	{
		this->empty='n';
	}
}
void DynamicArray::displayData()
{
	for(int i=0;i<size;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<this->empty;
	cout<<endl;
}

unsigned int DynamicArray::getSize()
{
	return this->size;
}