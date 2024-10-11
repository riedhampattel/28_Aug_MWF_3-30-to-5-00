#include<iostream>
using namespace std;
int sum(int num)
{
	if(num!=0)
	{
		return num + sum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	
	int result = sum(num);
	cout<<"\nThe addition is = "<<result;
	return 0;
}
