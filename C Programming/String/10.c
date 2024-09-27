#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nValue of str1 = %s",str1);
	printf("\nValue of str2 = %s",str2);
	
	int result = strcmp(str1,str2);
	
	if(result==0)
	{
		printf("\nBoth strings are equal");
	}
	else
	{
		printf("\nBoth strings are not equal");
	}
	return 0;
}
