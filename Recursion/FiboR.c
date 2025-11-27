//C program to implement recursion using fibonacci series
#include<stdio.h>
int rec(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int res = rec(n-1) + rec(n-2);
    return res;
}
int main()
{
    int k;
    printf("Enter Nth number\n");
    scanf("%d",&k);
    for(int i=0;i<=k;++i)
    {
        printf("%d\t",rec(i));
    }
    return 0;
}