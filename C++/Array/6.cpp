//Write a c++ program to insert an element in unsorted array, take position number and element from the user.
#include<iostream>
using namespace std;
int main()
{
	int a[100],size,position,element,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the element = ";
	cin>>element;
	cout<<"\nEnter the position number = ";
	cin>>position;
	
	if(position>=1 && position<=size+1)
	{
		cout<<"\nOriginal array = ";
		for(i=0;i<size;i++)
		{
			cout<<a[i]<<" ";
		}
	
		for(i=size-1;i>=position-1;i--)
		{
			a[i+1] = a[i];
		}
	
		a[position-1] = element;
	
		cout<<"\nArray after inserting an element = ";
		for(i=0;i<=size;i++)
		{
			cout<<a[i]<<" ";
		}	
	}
	else
	{
		cout<<"\nyou can enter an element till position "<<size+1;
	}
	
	return 0;
}
