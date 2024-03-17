#ifndef _BANKACCOUNT_H_
#define _BANKACCOUNT_H_
#include<iostream>

using namespace std;

class BankAcc
{
	private:
		int AccountNo;
		string AccountHolder;
		double AccountBal;
	public:
		BankAcc(int,string,double);
		void Withdraw(double);
		void Deposit(double);
		int CheckBal(double);
		void displaystat();
};
#endif

