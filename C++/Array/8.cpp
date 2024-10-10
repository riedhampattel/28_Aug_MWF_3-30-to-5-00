//Write a c++ program to delete an element from an array, take element number from the user.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,element,count=0,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];	
	} 
	
	cout<<"\nEnter the element which you want to delete = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			index = i;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\nElement is not present in an array";
	}
	else
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
	return 0;
}
