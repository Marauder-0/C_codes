//C program  to add one string to another using strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter String for Str1: ");
    gets(str1); //Try to Enter a space ahead of first string.
    printf("Enter String for Str2: ");
    gets(str2);
    strcat(str1,str2);
    printf("Added String is %s.\n",str1);
    return 0;
}