//Write a c program to take row and column numbers of 2D array and elements from the user and display the matrix.
#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[100][100];
	printf("\nEnter row count = ");
	scanf("%d",&row);
	printf("\nEnter col count = ");
	scanf("%d",&col);
	
	//input
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//output
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
