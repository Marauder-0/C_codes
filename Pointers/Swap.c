//C program to implement pointers
#include<stdio.h>
int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 1;
}
void main()
{
    int a;
    printf("Enter First Number: ");
    scanf("%d",&a);
    int b;
    printf("Enter Second Number: ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("A is %d\nB is %d\n",a,b);
}