//Write a c++ program to delete an element from an array, take index number from the user.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];	
	} 
	
	cout<<"\nEnter the index number of an element which you want to delete = ";
	cin>>index;
	
	if(index>=0 && index<=size-1)
	{
		cout<<"\nOriginal array = ";
		for(i=0;i<size;i++)
		{
			cout<<a[i]<<" ";
		}
		for(i=index;i<size-1;i++)
		{
			a[i] = a[i+1];
		}
		cout<<"\nArray after deleting an element = ";
		for(i=0;i<size-1;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"\nThere are only "<<size-1<<" index";
	}
	return 0;
}
