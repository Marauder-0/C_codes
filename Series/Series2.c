// C program for series -> 1 + 1/2 + 1/3 + 1/4 + 1/5 + _______ + 1/n
#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,mtp;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        mtp = 1.0/(float)i;
        sum = sum + mtp;
    }
    printf("sum is %f",sum);
    return 0;
}