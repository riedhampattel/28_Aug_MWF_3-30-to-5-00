#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);//12
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);//78
	
	switch(num1>num2)
	{
		case 0:
			printf("\n%d is the biggest number",num2);
		break;
		case 1:
			printf("\n%d is the biggest number",num1);
		break;
	}
	
	return 0;
}
