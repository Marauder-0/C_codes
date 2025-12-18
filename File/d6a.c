//C program to Print N prime Numbers
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);
    //Series Printing
    printf("Prime Number from 1 to %d -> ",n);
    // Iterate through every number from 2 up to N
    for(int i=2; i<=n; ++i)
    {
        int IsPrime = 1; // Flag: Assume current number 'i' is Prime
        
        // Optimization: Check divisors only up to square root of 'i'
        for(int j=2; j*j<=i; ++j)
        {
            if(i%j == 0) // If 'i' is divisible by 'j'
            {
                IsPrime = 0; // Found a factor, it's not Prime
                break;       // Stop checking further to save time
            }
        }
        
        // Only print if the flag remained True
        if(IsPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}