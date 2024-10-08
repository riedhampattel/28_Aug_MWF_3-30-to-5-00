/*
Write a program in C++ to find the last prime number that occurs before the entered number.
input := 50
output := 47
*/
#include<iostream>
using namespace std;
int main()
{
	int num,count,i,j,prime;
	cout<<"\nEnter the number = ";
	cin>>num;
	
	for(i=num;i>=1;i--)
	{
		count = 0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			prime = i;
			break;
		}
	}
	cout<<"\nLast prime number = "<<prime;
	return 0;
}
