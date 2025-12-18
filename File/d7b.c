//C program to implement a to the power b, using user-defined function
#include<stdio.h>
// User-Defined Function: Calculates 'a' raised to the power of 'b'
int power(int a, int b)
{
    int r = 1;
    // Loop runs 'b' times (e.g., if power is 3, loop runs 3 times)
    for(int i=1;i<=b;++i)
    {
        r = r*a; // Repeatedly multiply the base (e.g., 2*2*2)
    }
    return r;      // Send the final calculated value back to main()
}
int main()
{
    int base, pwr;
    // ... Input Logic ...
    printf("Enter Base Value: ");
    scanf("%d", &base);
    printf("Enter Power: ");
    scanf("%d", &pwr);
    // Function Call: Pass user inputs to the function
    int result = power(base, pwr);
    printf("Result = %d\n", result);
    return 0;
}