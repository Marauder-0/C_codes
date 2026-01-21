// C program to implement series -> [ X^1/1! - X^3/3! + X^5/5! ... = SUM ]
#include <stdio.h>
#include <math.h>
int main()
{
    int n, p = 1;
    float x, sum = 0.0, term;
    float fact; // Using float here avoids 'long' and makes division easy
    printf("Enter value of X: ");
    scanf("%f", &x);
    printf("Enter terms N: ");
    scanf("%d", &n);
    // Main loop for N terms
    for (int i = 1; i <= n; i++)
    {
        // --- Step 1: Calculate Factorial of p ---
        fact = 1.0;
        for (int j = 1; j <= p; j++)
        {
            fact = fact * j;
        }
        // --- Step 2: Calculate the full term ---
        term = pow(x, p) / fact;
        // --- Step 3: Add or Subtract Logic ---
        if (i % 2 != 0) // Odd steps (1st, 3rd, 5th...)
        {
            sum = sum + term; // Add
        }
        else // Even steps (2nd, 4th...)
        {
            sum = sum - term; // Subtract
        }
        p = p + 2; // Jump power by 2 (1 -> 3 -> 5)
    }
    printf(" Output of the series: %f", sum);
    return 0;
}