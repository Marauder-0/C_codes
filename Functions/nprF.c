//C program to print npr
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
float perm(int x,int y)
{
    float i = factorial(x)/(factorial(x-y));
    return i;
}
int main()
{
    int a,b;
    printf("Enter Values for NpR: ");
    scanf("%d%d",&a,&b);

    float r = perm(a,b);
    printf("Permuted Value is: %f",r);
    return 0;
}