#include<stdio.h>
int fact(int* x)
{
    int fact = 1;
    for(int i = 1;i<=*x;++i)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int a;
    printf("Enter a value for factorial: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fact(&a));
    return 0;
}