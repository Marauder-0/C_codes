// C program to calculate factorial
#include<stdio.h>
int main()
{
int i,j,fact=1;
printf("Enter a number\n");
scanf("%d", &i);
if(i>0)
{
 for(j=1;j<=i;++j)
 {
  fact = fact*j;
 }
 printf("Factorial of %d is %d\n", i,fact);
}
else
{
 printf("Invalid Input\n");
}
return 0;
}