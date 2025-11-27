// C program to check a number is palindrome or not(loop)
#include<stdio.h>
int main(void)
{
int num,temp,rem,rev=0;
printf("Enter a Number\n");
scanf("%d", &num);
temp = num;
while(num>0)
{
rem = num%10;
num = num/10;
rev = (rev*10)+rem;
}
if(temp == rev)
{
 printf("Number is Palindrome\n");
}
else
{
 printf("Number is not Palindrome\n");
}
return 0;
}

