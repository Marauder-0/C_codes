// C program to check input value is armstrong or not
#include<stdio.h>
#include<math.h>
int main(void)
{
int i,a,b,c,sum,temp;
printf("Enter any 3 digit number\n");
scanf("%d", &i);
temp = i;
a = i%10;
i = i/10;
b = i%10;
i = i/10;
c = i%10;
sum = pow(a,3) + pow(b,3) + pow(c,3);
if(temp == sum)
{
 printf("input value is armstrong\n");
}
else
{
 printf("input value is not armstrong\n");
}
return 0;
}

