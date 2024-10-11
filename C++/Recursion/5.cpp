#include<iostream>
using namespace std;
int power(int base,int exponent)
{
	if(exponent!=0)
	{
		return base * power(base,exponent-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int b,e;
	cout<<"\nEnter the value of base = ";
	cin>>b;
	cout<<"\nEnter the value of exponent = ";
	cin>>e;
	
	int result = power(b,e);
	cout<<"\nPower of base "<<b<<" and exponent "<<e<<" is = "<<result;
	return 0;
}
