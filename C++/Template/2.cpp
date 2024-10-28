#include<iostream>
using namespace std;
template <typename T,int size>
void sortarr(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;	
			}
		}	
	}	
}
int main()
{
	int i;
	int a[5] = {1,3,5,4,2};
	cout<<"\nArray a before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	sortarr(a);
	cout<<"\nArray a after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	char b[5] = {'A','R','D','S','Y'};
	cout<<"\nArray b before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	sortarr(b);
	cout<<"\nArray b after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	
	float c[5] = {78.65,41.258,74.63,1.25,0.58};
	cout<<"\nArray c before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	sortarr(c);
	cout<<"\nArray c after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
