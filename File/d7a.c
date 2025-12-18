//C program to implement factorial using user-definde function
#include<stdio.h>
// User-Defined Function: Handles the specific task of calculating factorial
int fact(int x)
{
    int fact=1;
    // Iterate from 1 up to 'x' to multiply them (e.g., 1*2*3*4*5)
    for(int i=1; i<=x; ++i)
    {
        fact = fact * i;
    }
    return fact; // Send the calculated value back to where it was called
}
int main()
{
    int num;
    printf("Enter a positive value: ");
    scanf("%d", &num);
    // Validation: Ensure the user didn't enter a negative number
    if(num > 0)
    {
        // Function Call: Pass 'num' to 'fact()', and store the returned answer in 'result'
        int result = fact(num);
        printf("Factorial = %d.\n", result);
    }
    else
    {
        printf("Enter Positive Value!\n");
    }
    return 0;
}