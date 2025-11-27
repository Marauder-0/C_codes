// C program to implement given number is odd or even
#include<stdio.h>
int main(void)
{
int i;
printf("Enter a Value\n");
scanf("%d", &i);
if(i%2 == 0)
{
 printf("INPUT VALUE IS EVEN\n");
}
else if(i%2 != 0)
{
 printf("INPUT VALUE IS ODD\n");
}
return 0;
}

