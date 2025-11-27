// C program to check a number is prime or not
#include<stdio.h>
int main(void)
{
int i , count=0,n;
printf("Enter any number\n");
scanf("%d", &n);
for(i = 1; i <= n; ++i)
{
 if(n%i==0)
 {
  ++count;
 }
}
if(count == 2)
{
 printf("Entered value is prime\n");
}
else
{
 printf("Entered value is not prime\n");
}
return 0;
}

