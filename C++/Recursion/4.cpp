#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
	if(size!=0)
	{
		return arr[size-1] + sumarr(arr,size-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int size,arr[100],i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;//5
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in arr["<<i<<"] = ";
		cin>>arr[i];
	}//1 2 3 4 5
	
	int result = sumarr(arr,size);
	cout<<"\nThe addition of all the elements is = "<<result;
	return 0;
}
