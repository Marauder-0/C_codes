// C program to implement series -> [ X^1/1! - X^3/3! + X^5/5! ... = SUM ]
#include<stdio.h>
#include<math.h>
// Helper function for factorial
long fact(int a)
{
    long f = 1;
    for(int i=1; i<=a; ++i)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, p = 1;
    float x, sum = 0.0, term;
    printf("Enter value of X: ");
    scanf("%f", &x);
    printf("Enter terms N: ");
    scanf("%d", &n);
    // Loop to calculate and print each term
    for(int i=1; i<=n; ++i)
    {
        // Calculate current term
        term = pow(x, p) / fact(p);

        // Print visual part (e.g., 2^3/3!)
        printf("%.0f^%d/%d!", x, p, p);

        // Formatting logic for signs
        if(i < n)
        {
            // If step is odd (1,3..), next sign is minus
            if(i % 2 != 0) printf(" - ");
            // If step is even (2,4..), next sign is plus
            else printf(" + ");
        }
        else
        {
            printf(" = "); // End of series
        }
        // Math logic: Odd terms add, Even terms subtract
        if(i % 2 != 0) sum = sum + term;
        else sum = sum - term;

        p = p + 2; // Increase power (1 -> 3 -> 5)
    }
    printf("%f", sum); // Final result
    return 0;
}