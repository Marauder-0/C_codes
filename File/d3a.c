// C program to implement given number is +ve, -ve or equal to zero
#include<stdio.h>
int main(void)
{
float a;
printf("Enter a number\n");
scanf("%f", &a);
if(a>0)
{
 printf("%f is a positive number.\n", a);
}
else if(a<0)
{
 printf("%f is a negative number.\n", a);
}
else
{
 printf("Input value is equal to %f.\n", a);
}
return 0;
}

