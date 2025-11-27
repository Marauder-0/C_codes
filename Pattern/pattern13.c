/*C program for following pattern
54321
4321
321
21
1    */
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;--i)
    {
        k=i;
        for(j=1;j<=i;++j)
        {
            printf("%d",k--);
        }
        printf("\n");
    }
    return 0;
}