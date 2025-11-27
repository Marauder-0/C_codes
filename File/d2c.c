// C program to check input 3 digit number is palindrome or not
#include<stdio.h>
int main(void)
{
int i,a,b,c,temp,rev;
printf("enter a 3 digit number\n");
scanf("%d", &i);
temp = i;
a = i%10;
i = i/10;
b = i%10;
i = i/10;
c = i%10;
rev = (a*100)+(b*10)+(c*1);
printf("Reverse of %d is %d\n", temp,rev);
if(temp==rev)
{
 printf("Therefore the input value is Palindrome.\n");
}
else
{
 printf("Therefore the input value is not Palindrome.\n");
}
return 0;
}

