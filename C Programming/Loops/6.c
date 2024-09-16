//Write a c program to take one input from the user and check whether the number is strong or not?
#include<stdio.h>
int main()
{
	int num,rem,fact,sum=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	
	while(num!=0)
	{
		rem = num%10;
		fact=1;
		for(i=rem;i>=1;i--)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		num = num/10;
	}
	
	if(sum==temp)
	{
		printf("\n%d is a strong number",temp);
	}
	else
	{
		printf("\n%d is not a strong number",temp);
	}
	
	return 0;
}
