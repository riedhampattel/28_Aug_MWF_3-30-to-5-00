#include<stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20;
	char ch = 'A';
	int *ptr1 = &num1;
	int* ptr2 = &num1;
	char *cptr = &ch;
	
	printf("\nThe value of num1 = %d",*ptr1);
	printf("\nThe address of num1 = %p",ptr1);
	printf("\nThe address of num1 = %p",ptr2);
	printf("\nThe size of num1 = %d",sizeof(num1));
	
	printf("\nThe address of num2 = %p",num2);
	printf("\nThe size of num2 = %d",sizeof(num2));
	
	printf("\nThe address of ch = %p",cptr);
	printf("\nThe size of ch = %d",sizeof(ch));
	
	return 0;
}
