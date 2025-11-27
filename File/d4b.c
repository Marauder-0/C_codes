// C program to implement given character is lower , upper character or digit.
#include<stdio.h>
int main(void)
{
char ch;
printf("Enter any character\n");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z')
{
 printf("Entered character is in lower form.\n");
}
else if(ch >= 'A' && ch <= 'Z')
{
 printf("Entered character is in UPPER form.\n");
}
else if(ch >= '1' && ch <= '9')
{
 printf("Entered character is a Digit.\n");
}
else
{
 printf("INVALID CHARACTER\n");
}
return 0;
}

