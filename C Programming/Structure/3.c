#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s[100];
	int size,i;
	printf("\nEnter the count of students = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].roll);
		printf("\nEnter the percentage = ");
		scanf("%f",&s[i].percentage);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<size;i++)
	{
		printf("\n\nData of student %d :=",i+1);
		printf("\nRoll no. = %d",s[i].roll);
		printf("\nPercentage = %.2f",s[i].percentage);
		printf("\nGrade = %c",s[i].grade);
	}
	return 0;
}
