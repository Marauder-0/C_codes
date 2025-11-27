// C program to implement three digit number and find sum of its digits
#include<stdio.h>
int main(void)
{
int i,a,b,c,sum,temp;
printf("Enter any 3 digit number\n");
scanf("%d", &i);
temp = i; //assign value of i into temp
//logic to extract digits
a = i%10;
i = i/10;
b = i%10;
i = i/10;
c = i%10;
sum = a+b+c;
printf("Sum of input 3 digit number's digits are %d\n", sum);
return 0;
}


