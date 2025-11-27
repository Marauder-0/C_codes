//C program to find legnth of string without using strlen()
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter String: ");
    gets(str);
    i=0;
    while(str[i] != '\0')
    {
        ++i;
    }
    printf("Length of string '%s' is: %d\n",str,i);
    return 0;
}