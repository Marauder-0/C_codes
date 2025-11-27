//C program to add two strings without using  strcat()
#include<stdio.h>
int main()
{
    int n=0, c;
    char str1[100], str2[100];
    printf("Enter String 1\n");
    scanf("%s", str1);//abc
    printf("Enter String 2\n");
    scanf("%s", str2);
    while(str1[n] != '\0')
    {
        ++n;
    }
    str1[n] = ' ';
    ++n;
    c = 0;
    while(str2[c] != '\0')
    {
        str1[n+c]=str2[c]; // strn(5) = strn2(0) and so on
        ++c;
    }
    str1[n + c] = '\0'; // strn1(8) is \0
    printf("\n%s", str1);
    return 0;
}