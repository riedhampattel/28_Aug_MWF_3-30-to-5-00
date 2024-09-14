//Write a c program to take 2 numbers from the user and print all the numbers between those numbers
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	printf("\nNumbers between %d and %d = ",start,end);
	for(i=start;i<=end;i++)
	{
		printf("%d ",i);
	}
	
	return 0;
}
