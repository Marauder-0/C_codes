//C program to implement series->  [1! + 2! + 3! + 4! ----- +N! = SUM]
#include<stdio.h>
int fact(int a) //Usage of Factorial function to make it Clean
{
    int fact = 1;
    for(int i=1;i<=a;++i)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n,sum=0;
    printf("Enter Size of Series: ");
    scanf("%d",&n);
    // Iterate from 1 to N to generate every term of the series
    for(int i=1; i<=n; ++i)
    {
        printf("%d! ", i); // Print the number and factorial symbol
    
        // FORMATTING LOGIC:
        // If it's NOT the last number, print " + "
        // If it IS the last number, print " = " to finish the series
        if(i < n)
        {
            printf(" + "); 
        }
        else
        {
            printf("= ");
        }
        // LOGIC: Call the helper function 'fact(i)' and add it to total
        sum = sum + fact(i);
    }
    printf("%d", sum); // Print the final calculated answer
    return 0;
}