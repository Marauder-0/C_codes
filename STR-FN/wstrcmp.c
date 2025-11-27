//C program to compare 2 strings using strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter StringA: ");
    gets(str1);
    printf("Enter StringB: ");
    gets(str2);

    i = strcmp(str1,str2);
    if(i == 0)
    {
        printf("Equal Strings\n");
    }
    else if(i>0)
    {
        printf("StringA Is greater\n");
    }
    else
    {
        printf("StringB is greater\n");
    }
    return 0;
}
//ASCII Code for a = 97, while A = 65