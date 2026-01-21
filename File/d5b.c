// Reverse a number using while loop
#include <stdio.h>
int main()
{
    int num, rem, rev;
    printf("Enter Test Value: ");
    scanf("%d", &num);
    // Reverse Logic 4321
    rev = 0;
    while (num != 0)
    {
        rem = num % 10;         // Digit Extraction  1 2 3 4
        rev = (rev * 10) + rem; // Start Making Reversed Number 1 12 123 1234
        num = num / 10;         // Remove Remainder 432 43 4 0
    }
    printf("Reversed Number is %d\n", rev);
    return 0;
}