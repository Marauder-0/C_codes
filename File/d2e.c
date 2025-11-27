// C program to perform swapping using third variable
#include<stdio.h>
int main(void)
{
int a,b,c;
printf("enter two values for a,b to be swapped\n");
scanf("%d%d", &a,&b);
printf("Before Swap \na = %d\n b = %d\n", a,b);
c = a;
a = b;
b = c;
printf("After Swap \na = %d\n b = %d\n", a,b);
return 0;
}

