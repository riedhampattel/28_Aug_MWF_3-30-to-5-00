//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
	int a[100],size,index,element,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the element = ";
	cin>>element;
	cout<<"\nEnter the index number = ";
	cin>>index;
	
	if(index>=0 && index<=size)
	{
		cout<<"\nOriginal array = ";
		for(i=0;i<size;i++)
		{
			cout<<a[i]<<" ";
		}
	
		for(i=size-1;i>=index;i--)
		{
			a[i+1] = a[i];
		}
	
		a[index] = element;
	
		cout<<"\nArray after inserting an element = ";
		for(i=0;i<=size;i++)
		{	
			cout<<a[i]<<" ";
		}	
	}
	else
	{
		cout<<"\nYou can insert an element from index 0 to index "<<size;
	}
	return 0;
}
