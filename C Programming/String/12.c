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
	
	printf("\nValue of str1 before using strupr() = %s",str1);
	printf("\nValue of str2 before using strlwr()= %s",str2);
	
	strupr(str1);
	strlwr(str2);
	
	printf("\nValue of str1 after using strupr() = %s",str1);
	printf("\nValue of str2 after using strlwr()= %s",str2);
	return 0;
}
