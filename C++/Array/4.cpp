//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,count=0,element;
	cout<<"\nEnter the size of an array = ";
	cin>>size;//5
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element on a["<<i<<"] = ";
		cin>>a[i];
	}
	//1 2 3 4 5
	//0 1 2 3 4
	cout<<"\nEnter the element which you want to find = ";
	cin>>element;//3
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			cout<<"\n"<<element<<" is present on index "<<i;
			count++;//1
		}
	}
	if(count==0)
	{
		cout<<element<<" is not present in an array";
	}
	return 0;
}
