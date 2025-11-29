#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20],*ptr=ch;
    char ch1[20],*ptr1=ch1;
    printf("Enter String: ");
    scanf("%19s",ptr);
    strcpy(ch1,ch);
    strrev(ch);
    int z = strcmp(ch,ch1);
    if(z == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome.\n");
    }
    return 0;
}