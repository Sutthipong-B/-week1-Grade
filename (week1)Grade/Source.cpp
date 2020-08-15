#include<stdio.h>
int main()
{
	int grade;
	printf("Type your score (0-100) : ");
	scanf_s("%d", &grade);
	if (grade >= 80 && grade <= 100)
	{
		printf("Your grade is A");
	}
	else if (grade >= 75 && grade <= 79)
	{
		printf("Your grade is B+");
	}
	else if (grade >= 70 && grade <= 74)
	{
		printf("Your grade is B");
	}
	else if (grade >= 65 && grade <= 69)
	{
		printf("Your grade is C+");
	}
	else if (grade >= 60 && grade <= 64)
	{
		printf("Your grade is C");
	}
	else if (grade >= 55 && grade <= 59)
	{
		printf("Your grade is D+");
	}
	else if (grade >= 50 && grade <= 54)
	{
		printf("Your grade is D");
	}
	else if (grade >= 0 && grade <= 49)
	{
		printf("Your grade is F");
	}
	else
	{
		printf("Your input score is WRONG");
	}
	return 0;
}