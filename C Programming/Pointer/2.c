#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int *ptr = &a;
	
	printf("\nThe address of array = %p",ptr);
	printf("\nThe address of 1st element = %p",&a[0]);
	printf("\nThe address of 2nd element = %p",&a[1]);
	printf("\nThe address of 3rd element = %p",&a[2]);
	printf("\nThe address of 4th element = %p",&a[3]);
	printf("\nThe address of 5th element = %p",&a[4]);
	
	printf("\nThe value of 1st element = %d",*ptr);
	printf("\nThe value of 2nd element = %d",*(ptr+1));
	printf("\nThe value of 3rd element = %d",*(ptr+2));
	
	return 0;
}
