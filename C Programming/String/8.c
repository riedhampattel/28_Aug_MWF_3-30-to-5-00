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
	
	printf("\nValue of str1 before using strcpy() = %s",str1);
	printf("\nValue of str2 before using strcpy()= %s",str2);
	
	strcpy(str1,str2);
	
	printf("\nValue of str1 after using strcpy() = %s",str1);
	printf("\nValue of str2 after using strcpy()= %s",str2);
	return 0;
}
