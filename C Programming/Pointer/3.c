#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int *ptr = &a;
	int i;
	
	printf("\nThe address of array = %p\n",ptr);
	
	printf("\nThe address of elements := ");
	for(i=0;i<5;i++)
	{
		printf("\nAddress of %d is = %p",*(ptr+i),ptr+i);
	}
	
	return 0;
}
