#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter any number = ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n%d is a positive number",num);
	}
	else if(num<0)
	{
		printf("\n%d is a negative number",num);
	}
	else
	{
		printf("\n%d is a neutral number",num);
	}
	return 0;
}
