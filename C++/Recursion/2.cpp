#include<iostream>
using namespace std;
int fact(int num)
{
	if(num!=0)
	{
		return num * fact(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;//5
	
	int result = fact(num);
	cout<<"\nFactorial of "<<num<<" is = "<<result;
	return 0;
}
