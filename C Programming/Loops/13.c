#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			break;	
		}
		printf("\n%d",i);
	}
	return 0;
}
