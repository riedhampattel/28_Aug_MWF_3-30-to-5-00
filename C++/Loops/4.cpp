//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,gcd,i;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;
	
	int temp = num1>num2 ? num2:num1;
	
	for(i=1;i<=temp;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd = i;
		}
	}
	cout<<"GCD = "<<gcd;
	return 0;
}
