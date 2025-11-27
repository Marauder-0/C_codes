#include<stdio.h>
int pow(int a,int b)
{
    int i,r=1;
    for(i=1;i<=b;++i)
    {
        r = r*a;
    }
    return r;
}
void main()
{
    int a,b,r;
    printf("Enter Base and  Power: ");
    scanf("%d%d",&a,&b);

    r = pow(a,b);

    printf("Final Result: %d",r);
}