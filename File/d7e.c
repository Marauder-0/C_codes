//C program to find a to the power b using recursion
#include<stdio.h>
int power(int a, int b)
{   
    // Base Case: Stop when power reaches 0.
    if(b == 0)
    {
        return 1;    // Mathematical rule: Any number^0 = 1
    }
    // Recursive Step: a * (a^(b-1))
    // Example: 2^3 becomes 2 * power(2, 2)
    return a*power(a, b-1);
}
int main()
{
    int base, pwr;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Power: ");
    scanf("%d", &pwr);
    
    // Call function
    int result = power(base, pwr);
    
    printf("Result = %d\n", result);
    return 0;
}