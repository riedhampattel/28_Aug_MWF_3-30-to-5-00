#include<stdio.h>
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	fgets(str,50,stdin);
	printf("\nValue of str = %s",str);
	return 0;
}