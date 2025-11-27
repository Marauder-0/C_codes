#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;++i)
    {
        fact = fact*i;
    }
    return fact;
}
void main()
{
    int i,r;
    printf("Enter A integer ");
    scanf("%d",&i);

    r = fact(i);

    printf("Factorial is %d\n",r);
}