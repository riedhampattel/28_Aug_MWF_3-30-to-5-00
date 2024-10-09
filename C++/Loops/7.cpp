/*
Write a c++ program to dislay this pattern
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,k,j;
	int spc = 4;
	int star = 4;
	for(i=1;i<=5;i++)
	{
		for(k=spc;k>=1;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		spc--;
	}
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(j=star;j>=1;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
		star--;
	}
	return 0;
}
