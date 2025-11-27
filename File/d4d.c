// C program To implement any century year find given year is leap year or not leap year.
#include<stdio.h>
int main(void)
{
int year;
printf("Enter any year\n");
scanf("%d",&year);
if((year%400 == 0) || ((year%4 == 0) && (year%100 != 0)))
{
 printf("Entered year is a Leap year\n");
}
else
{
 printf("Entered year is not a Leap year\n");
}
return 0;
}

