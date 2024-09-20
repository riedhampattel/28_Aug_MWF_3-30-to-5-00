/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j,spc,k;
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	
	spc = row-1;
	
	for(i=1;i<=row;i++)
	{
		for(k=spc;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		spc--;
		printf("\n");
	}
		
	return 0;
}
