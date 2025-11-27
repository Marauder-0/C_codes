/* C program for following pattern
EDCBA
DCBA
CBA
BA
A     */
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=69;i>=65;--i)
    {
        ch = (char)i;
        for(j=65;j<=i;++j)
        {
            printf("%c",ch--);
        }
        printf("\n");
    }
    return 0;
}