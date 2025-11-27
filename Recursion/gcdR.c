#include<stdio.h>
int gcd(int a,int b)
{
    if(a>b)
    { 
        return gcd((a-b),b);
    }
    if(b>a)
    {
        return gcd(a,(b-a));
    }
    if(a==b)
    {
        return a;
    }
}
int main()
{
    int x,y;
    printf("Enter two Integers: ");
    scanf("%d%d",&x,&y);
    int r = gcd(x,y);
    printf("GCD is %d\n",r);
    return 0;
}