//Write a program in C++ to find the sum of the digits of a given number.
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,rem;
	cout<<"\nEnter the number = ";
	cin>>num;//456
	
	while(num!=0)
	{
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	
	cout<<"\nSum of all the digits is = "<<sum;
	return 0;
}
