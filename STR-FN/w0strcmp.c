//C program to compare 2 strings without using strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    i=0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0')
        {
            break;
        }
        ++i;
    }
    if(str1[i]>str2[i])
    {
        printf("String 1 greater\n");
    }
    else if(str1[i]<str2[i])
    {
        printf("String 2 greater\n");
    }
    else
    {
        printf("Both string are equal.\n");
    }
    return 0;
}