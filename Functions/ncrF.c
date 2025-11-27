//C program to calculate nCr
#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
    if(a>0){
        for(i=1;i<=a;++i){
            fact = fact*i;
        }
    }
    return fact;
}
int comb(int x,int y)
{
    int i = factorial(x)/(factorial(y)*(factorial(x-y)));
    return i;
}
int main()
{
    int a,b;
    printf("Enter Values for nCr: ");
    scanf("%d%d",&a,&b);

    int r = comb(a,b);
    printf("%d\n",r);
    return 0;
}