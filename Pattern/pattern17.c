/*C program for following pattern
A
AB
ABC
ABCD
ABCDE  */

//Method-I
/* #include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;++i)
    {
        for(j=65;j<=i;++j)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}    */


//Method-II
/* #include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}   */


//Method-III
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=1;i<=5;++i)
    {
        ch = 'A';
        for(j=1;j<=i;++j)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}