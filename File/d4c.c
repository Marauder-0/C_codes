//C program to Implement print N-Fibonacci numbers
#include<stdio.h>
int main()
{
    int a,b,n,i,c;
    printf("Enter Nth Value of Series: ");
    scanf("%d",&n);
    a = 0; //Assign First Value
    b = 1; //Assign Second Value
    printf("Series: %d %d ",a,b);
    //Fibonacci Logic
    for(i=0;i<n;++i)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}