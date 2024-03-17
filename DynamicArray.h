#include<iostream>

using namespace std;

class DynamicArray
{
	private:
		int *arr;
		unsigned int size;
		char empty;
	public:
		//Default Constructor
		DynamicArray();

		//Parametrised Constructor
		DynamicArray(unsigned int);

		//Copy Constructor
		DynamicArray(DynamicArray&);

		//Destructor
		~DynamicArray();

		//Set the data in array
		void setData(int*,unsigned int);
		//Display
		void displayData();
		//Get size
		unsigned int getSize();


};
