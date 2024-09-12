//Write a c program to take positive numbers from the user untill user enteres -1 and display sum, average, minimum and maximum and count of all numbers.
#include<stdio.h>
int main()
{
	int num,min=32767,max=0,sum=0,count=0,avg;
	start :
	printf("\nEnter any positive number to continue and -1 to exit = ");
	scanf("%d",&num);
	if(num!=-1)
	{
		if(num>=0)
		{
			if(num<min)
			{
				min = num;
			}
			if(num>max)
			{
				max = num;
			}
			count++;
			sum = sum + num;
		}
		else
		{
			printf("\nEnter positive numbers only!");
		}
	}
	if(num==-1)
	{
		goto end;
	}
	goto start;
	end :
	printf("\nMinimum number = %d",min);
	printf("\nMaximum number = %d",max);
	printf("\nSum of numbers = %d",sum);
	printf("\nCount of numbers = %d",count);
	printf("\nAverage of numbers = %.2f",(float)sum/(float)count);
	return 0;
}
