#include<stdio.h>
int cube(int n)
{
    int c;
    c = n*n*n;
    return c;
}
void main()
{
    int a,cu;
    printf("Enter any integer: ");
    scanf("%d",&a);
    cu = cube(a);
    printf("Cube Value is %d\n",cu);
}