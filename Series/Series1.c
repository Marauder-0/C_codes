// C program for series - 1! + 2! + 3! + 4! + __________ + n!
#include<stdio.h>
int main()
{
    int i,sum=0,fact=1,n;
    printf("Enter value of \n");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;++i)
        {
            fact = fact*i; // 1 + 2 + 6 + 24 = 3 (for n=4)
            sum = sum+fact;
        }
        printf("Sum of Factorial is %d\n",sum);
    }
    return 0;
}