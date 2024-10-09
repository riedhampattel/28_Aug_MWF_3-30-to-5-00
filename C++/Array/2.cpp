//Write a c++ program to take 2 arrays from the user and merge them in third array
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[200];
	int sizea,sizeb,i;
	cout<<"\nEnter the size of an array a = ";
	cin>>sizea;
	int temp = sizea;
	for(i=0;i<sizea;i++)
	{
		cout<<"\nEnter the elements in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<endl;
	
	cout<<"\nEnter the size of an array b = ";
	cin>>sizeb;//3
	for(i=0;i<sizeb;i++)
	{
		cout<<"\nEnter the elements in b["<<i<<"] = ";
		cin>>b[i];
	}
	
	for(i=0;i<sizea;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<sizeb;i++)
	{
		c[sizea] = b[i];
		sizea++;
	}
	cout<<"\nArray a = ";
	for(i=0;i<temp;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray b = ";
	for(i=0;i<sizeb;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\nMerged array c = ";
	for(i=0;i<sizea;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
