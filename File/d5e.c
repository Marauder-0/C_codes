//C program to check input value is prime or not
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    printf("Enter Test value: ");
    scanf("%d",&num);
    //Prime Logic
    if(num<=1)
    {
        printf("Not Prime.\n");
        return 0;
    }
    int IsPrime = true;        // Flag: Assume number is Prime initially
    
    // Run loop only up to square root of num (Optimization)
    for(int i=2; i*i<=num; ++i) 
    {
        if(num%i == 0)         // Check if 'i' divides num perfectly
        {
            IsPrime = false;  // Found a factor, marked as Not Prime
            break;            // Stop loop immediately to save time
        }
    }
    if(IsPrime)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}