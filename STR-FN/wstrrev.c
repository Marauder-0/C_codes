// C program to reverse a string  using strrev()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("Enter String: ");
    gets(str1);
    strrev(str1);
    printf("Reversed is %s\n",str1);
    return 0;
}