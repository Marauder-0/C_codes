//C program to copy one string to another string using strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter String1: ");
    gets(str1);
    printf("Original String is: %s\n",str1);
    strcpy(str2,str1);
    printf("Copied String is %s\n",str2);
    return 0;
}