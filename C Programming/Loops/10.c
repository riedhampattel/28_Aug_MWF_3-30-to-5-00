//Write a c program to take 2 numbers from the user and print all the prime numbers and not prime numbers between them.(Use switch case)
#include<stdio.h>
int main()
{
	int start,end,i,j,choice,count;
	printf("\nEnter the value of start = ");
	scanf("%d",&start);
	printf("\nEnter the value of end = ");
	scanf("%d",&end);
	
	printf("\n1.---> Prime numbers = ");
	printf("\n2.---> Non prime numbers = ");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			for(i=start;i<=end;i++)
			{
				count = 0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("%d ",i);
				}
			}
		break;
		case 2 :
			for(i=start;i<=end;i++)
			{
				count = 0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count!=0)
				{
					printf("%d ",i);
				}
			}
		break;
	}
	
	return 0;
}
