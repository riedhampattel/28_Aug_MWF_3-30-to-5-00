#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("first.txt","w");
	fp2 = fopen("second.txt","w");
	fprintf(fp1,"Hello this is my first file");
	fprintf(fp2,"Hello this is my second file");
	fclose(fp1);
	fclose(fp2);
	fp3 = fopen("third.txt","w");
	fprintf(fp3,"This is my third file");
	fclose(fp3);
	printf("\nOperation successful");
	return 0;
}
