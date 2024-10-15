//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acnt_no;	
		double balance;
	public :
		void set()
		{
			cout<<"\nEnter the account no. = ";
			cin>>acnt_no;
			cout<<"\nEnter the account balance = ";
			cin>>balance;
		}
		void deposit(double amnt)
		{
			balance = balance + amnt;
		}
		void withdraw(double amnt)
		{
			if(balance>amnt)
			{
				balance = balance - amnt;
			}
			else
			{
				cout<<"\nNot enough balance";
			}
		}
		void get()
		{
			cout<<"\nAccount no. = "<<acnt_no;
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.set();
	b1.withdraw(5000);
	b1.deposit(10000);
	b1.withdraw(20000);
	b1.get();
	return 0;
}
