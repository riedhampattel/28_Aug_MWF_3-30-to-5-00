#include<stdio.h>
int main()
{
	int n1 = 10,n2 = 20,n3;
	int *ptr1 = &n1;
	int *ptr2 = &n2;
	int *ptr3 = &n3;
	
	printf("\nValue of n1 before swapping = %d",*ptr1);
	printf("\nValue of n2 before swapping = %d",*ptr2);
	
	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	
	printf("\nValue of n1 after swapping = %d",*ptr1);
	printf("\nValue of n2 after swapping = %d",*ptr2);
	
	return 0;
}
