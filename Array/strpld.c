//C program to check input string is palindrome or not using string built-in functions
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j;
    printf("Enter String: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    j = strcmp(str1,str2);
    if(j==0)
    {
        printf("String is Palindrome\n");
    }
    else
    {
        printf("String is not Palindrome\n");
    }
    return 0;
}