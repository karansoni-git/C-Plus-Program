#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		printf("it's a leap year");
	}
	else
	{
		printf("it's not a leap year");
	}
	getch();
	return 0;
}
