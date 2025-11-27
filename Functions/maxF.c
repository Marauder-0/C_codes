#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
void main()
{
    int a,b,c,r;
    printf("Enter Three Values to Compare: ");
    scanf("%d%d%d",&a,&b,&c);
    r = max(a,b,c);
    printf("Max is %d\n",r);
}