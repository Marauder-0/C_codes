//C program to implement factorial using recursion
#include<stdio.h>
// Recursive Function: Calls itself to solve the problem
int fact(int a)
{
    // 1. BASE CASE: The stop condition.
    // Without this, the recursion would run forever (Stack Overflow).
    if(a==0)
    {
        return 1;
    }
    // 2. RECURSIVE STEP: Formula n! = n * (n-1)!
    // The function pauses here and calls itself with a smaller number.
    return a*fact(a-1);
}
int main()
{
    int num;
    printf("Enter A Number: ");
    scanf("%d", &num);
    // Validate input (Note: You might want to allow 0 here since 0! is 1)
    if(num > 0)
    {
        int result = fact(num); // Initial call to start the chain
        printf("Factorial = %d.\n", result);
    }
    else
    {
        printf("Enter Positive value!\n");
    }
    return 0;
}