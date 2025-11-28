#include<stdio.h>
int main()
{
    int a,b;
    int*x,*y;
    x = &a;
    y = &b;
    printf("Enter two integers: ");
    scanf("%d%d",x,y);
    printf("Sum of input Values is %d\n",(*x+*y));
    printf("Multiplication of Input variable is %d\n",(*x)*(*y));
    printf("Division of input values is %.3f\n",(float)(*x)/(*y));
    if(*x > *y)
    {
        printf("Subtraction of input values is %d\n",*x-*y);
    }
    else
    {
        printf("Subtraction of input values is %d\n",*y-*x);
    }
    return 0;
}