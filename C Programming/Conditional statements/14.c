#include<stdio.h>
int main()
{
	int num;
	up :
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	printf("\nValue of num = %d",num);
	if(num==-1)
	{
		goto down;
	}
	goto up;
	down :
	return 0;
}
