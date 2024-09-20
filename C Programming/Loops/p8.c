/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j,p,q;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	
	for(i=1;i(4)<=row(3);i++)
	{
		if(i%2==0)
		{
			p = 0;
			q = 1;
		}
		else
		{
			p = 1;
			q = 0;
		}
		for(j=1;j(4)<=i(3);j++)
		{
			if(j%2==0)
			{
				printf("%d ",q);		
			}
			else
			{
				printf("%d ",p);
			}
		}
		printf("\n");
	}
	
	return 0;
}
