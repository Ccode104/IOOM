#include<iostream>

using namespace std;

typedef int ItemType;
typedef enum{FAILURE,SUCCESS} status_code;
typedef enum{FALSE,TRUE} Boolean;

class Stack
{
	private:
		int top;
		ItemType data[20];
	public:
		status_code push(ItemType);
		status_code pop(ItemType *);
		Boolean IsStackEmpty();
		Boolean IsStackFull();
		void Initialise();
};


		
