//C program to find length of a string using strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter String: ");
    gets(str);
    i = strlen(str);
    printf("Length of String '%s' is %d.\n",str,i);
    return 0;
}