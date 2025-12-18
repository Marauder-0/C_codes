//C program to Implement N armstrong Numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter N value: ");
    scanf("%d",&n);
    printf("Armstrong Number from 1 to %d -> ",n);
    // Iterate through every number from 1 to N
    for(int i=1; i<=n; ++i)
    {
        int temp = i;
        int count = 0;
        // Loop 1: Count the number of digits (e.g., 153 has 3 digits)
        // We need this count to determine the Power for the next step.
        while(temp > 0)
        {
            temp = temp/10;
            ++count;
        }
        // RESET temp back to 'i' because it became 0 in the previous loop
        temp = i; 
        int sum = 0;
        // Loop 2: Calculate Sum of Digits raised to the power of 'count'
        while(temp > 0)
        {
            int rem = temp%10;
            // Usage of round(): Fixes precision errors (e.g., 124.999 -> 125)
            // Usage of pow(): Calculates rem^count (e.g., 5^3)
            sum = sum + round(pow(rem, count));
            temp = temp/10;
        }
        // Check if calculated sum matches the original number
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}