#include<stdio.h>
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
	
	printf("\nReverse ordered array = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
