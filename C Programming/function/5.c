#include<stdio.h>
int arrsum(int arr[],int size)
{
	int i,sum=0;
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);	
	}
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	int size,a[100],i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int ans = arrsum(a,size);
	printf("\nThe addition is = %d",ans);
	return 0;
}
