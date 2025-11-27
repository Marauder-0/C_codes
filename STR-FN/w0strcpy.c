//C program to copy from one string to another
#include<stdio.h>
int main()
{
    int i;
    char str1[100],str2[100];
    printf("Enter String: ");
    gets(str1);
    printf("Original %s \n",str1);
    i=0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        ++i;
    }
    str2[i] = '\0';
    printf("After Copy String is %s\n",str2);
    return 0;
}