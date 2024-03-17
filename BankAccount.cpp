#include"BankAccount.h"
#include<iostream>

using namespace std;

BankAcc::BankAcc(int Num=0,string Name="\0",double Bal=0):AccountNo(Num),AccountHolder(Name),AccountBal(Bal)
{}
void BankAcc::Withdraw(double Amount)
{
	if(CheckBal(Amount))
		AccountBal-=Amount;
	else
		cout<<"You are trying to withdraw more than allowed limit"<<endl;
}

void BankAcc::Deposit(double Amount)
{
	AccountBal+=Amount;
}

int BankAcc::CheckBal(double Amount)
{
	if(AccountBal<=Amount)
		return 1;
	else
		return 2;
}

void BankAcc::displaystat()
{
	cout<<"Account Holder's Name:"<<AccountHolder<<endl;
	cout<<"Account Number:"<<AccountNo<<endl;
	cout<<"Account Balance:"<<AccountBal<<endl;
}



