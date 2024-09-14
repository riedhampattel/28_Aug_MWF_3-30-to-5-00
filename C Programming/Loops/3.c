//Write a c program to take 2 numbers from the user and if user enteres number 1 bigger than number 2 then print all the numbers in reverse order else print in normal order
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	if(start>end)
	{
		printf("\nNumbers between %d and %d is = ");
		for(i=start;i>=end;i--)
		{
			printf("%d ",i);
		}
	}
	else
	{
		printf("\nNumbers between %d and %d is = ");
		for(i=start;i<=end;i++)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
