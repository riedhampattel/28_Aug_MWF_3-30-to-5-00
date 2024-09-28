#include<stdio.h>
int length(char str[])
{
	int len=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;//5
	}
	return len;
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal string = %s",str);
	int len = length(str);
	printf("\nLength of string = %d",len);
	return 0;
}
