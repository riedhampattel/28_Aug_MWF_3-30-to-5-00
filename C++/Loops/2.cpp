//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int start,end,i,j;
	cout<<"\nEnter the starting value = ";
	cin>>start;
	cout<<"\nEnter the ending value = ";
	cin>>end;
	
	cout<<"\nArmstrong numbers = ";
	for(i=start;i<=end;i++)
	{
		int num = i;
		int temp = i;
		int sum=0,digit=0,rem,power;
		while(num!=0)
		{
			digit++;
			num = num / 10;
		}
		for(j=1;j<=digit;j++)
		{
			rem = temp%10;
			power = pow(rem,digit);
			sum = sum + power;
			temp = temp/10;
		}
		if(i==sum)
		{
			cout<<i;
		}
	}
	return 0;
}
