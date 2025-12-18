//C program to implement factorial using for loop of positive number
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter Factorial value: ");
    scanf("%d",&num);
    if(num>0)
    {
        //Factorial Logic
        for(i=1;i<=num;++i)
        {
            fact = fact*i;
        }
    }
    printf("Factorial = %d\n",fact);
    return 0;
}