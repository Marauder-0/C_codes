#include<stdio.h>
int fact(int a);
int main()
{
    int x;
    printf("Enter value for factorial: ");
    scanf("%d",&x);
    printf("Factorial of %d is %d\n.",x,fact(x));
    return 0;
}
int fact(int a)
{
    int fact = 1;
    for(int i=1;i<=a;++i)
    {
        fact = fact*i;
    }
    return fact;
}