/*C program for following pattern
234567
34567
4567
567
67
7      */
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=6;++i)
    {
        k=i;
        for(j=6;j>=i;--j)
        {
            printf("%d",++k);
        }
        printf("\n");
    }
    return 0;
}