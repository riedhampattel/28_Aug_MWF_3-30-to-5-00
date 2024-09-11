#include<stdio.h>
//nested if...else
int main()
{
	int num1,num2,num3;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nEnter the value of num3 = ");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d is the biggest number",num1);
		}
		else
		{
			printf("%d is the biggest number",num3);
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("%d is the biggest number",num2);
		}
		else
		{
			printf("%d is the biggest number",num3);
		}
	}
	return 0;
}
