#include<stdio.h>
int main()
{
	int a[100],size,i,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	//input
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//addition
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	
	//output
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nThe addition of all the elements is = %d",sum);
	printf("\nThe average of all the elements is = %.2f",(float)sum/(float)size);
	
	return 0;
}
