#include"BankAccount.h"
#include<iostream>

using namespace std;

int main()
{

	BankAcc b1(1,"Shyam",0.0);
	BankAcc b2(2,"Mohan",0.0);
	
	b1.Deposit(20.0);
	cout<<"Deposited 20 rupees in account 1"<<endl;

	b1.Withdraw(10.0);
	cout<<"Withdrawn 10 rupees from account 1"<<endl;

	b2.Deposit(100.0);
	cout<<"Deposited 100 rupees in account 2"<<endl;
	b2.Withdraw(50.0);
	cout<<"Withdrawn 50 rupees from account 2"<<endl;
	
	cout<<"Account 1 Status:"<<endl;
	b1.displaystat();
	cout<<"Account 2 Status:"<<endl;
	b2.displaystat();
	
	return 0;
}

