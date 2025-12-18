//C program to implement call by value(swap)
#include<stdio.h>
// Function receives COPIES of the variables
void swap(int a, int b)  // (a and b are new local variables)
{
    int temp;
    // Swap Logic
    temp = a;
    a = b;
    b = temp;
    // Printing here because the changes are only valid INSIDE this function
    printf("After (Inside Function)\nA = %d\nB = %d.\n", a, b);
}
int main()
{
    int x, y;
    // ... Input Logic ...
    printf("Enter First Value: ");
    scanf("%d", &x);
    printf("Enter Second Value: ");
    scanf("%d", &y);
    printf("Before\nA = %d\nB = %d.\n", x, y);
    // CALL BY VALUE: We pass the VALUES of x and y, not their address.
    // The function creates its own copies. x and y in main() remain unchanged.
    swap(x, y);
    
    return 0;
}