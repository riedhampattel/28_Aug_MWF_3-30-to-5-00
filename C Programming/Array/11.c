//Write a c program to take row and column numbers of 2D array and elements from the user and make one calculator with addition, subtraction and multiplication facilities using control statement.
#include<stdio.h>
int main()
{
	int size,choice,i,j,k;
	int a[100][100],b[100][100],ans[100][100];
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	//input
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nArray a := \n");
		for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
	
	printf("\nArray b := \n");
		for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
	
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nAddition of array a and b is := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 2:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nSubtraction of array a and b is := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 3:
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j]=0;
					for(k=0;k<size;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
					}
				}
			}
			printf("\nMultiplication of array a and b := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
	}
	
	return 0;
}
