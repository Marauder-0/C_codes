//C program to implement reverse a array using pointer
#include<stdio.h>
int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 1;
}
int main()
{
    int a[10];
    int*q=a;
    printf("Enter 10 integers:\n");
    for(int i=0;i<10;++i)
    {
        scanf("%d",q+i);

    }
    printf("Before series: ");
    for(int i=0;i<10;++i)
    {
        printf("%d\t",*(q+i));
    }
    for(int i=0;i<5;++i)
    {
        swap((q+i) , (q+9-i));
    }
    printf("\n");
    printf("After Reverse: ");
    for(int i=0;i<10;++i)
    {
        printf("%d\t",*(q+i));
    }
    return 0;
}