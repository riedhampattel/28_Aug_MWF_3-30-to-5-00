//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],index,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the index number = ";
	cin>>index;
	
	if(index>=0 && index<size)
	{
		cout<<a[index]<<" is present on index number "<<index;
	}
	else
	{
		cout<<"\nThere are only "<<size-1<<" indexes in an array";
	}
	return 0;
}
