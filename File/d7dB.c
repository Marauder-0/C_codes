//C program to implement call by reference(swap)
#include<stdio.h>
// Function receives Addresses (Pointers), not values
void swap(int*a,int*b)
{
    int temp;
    // '*' (Dereference) gives us the Value stored at that Address
    // We are swapping the original variables directly
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    // ... Input Logic ...
    printf("Enter 1st Value: ");
    scanf("%d", &x);
    printf("Enter 2nd Value: ");
    scanf("%d", &y);
    
    printf("Before\nA = %d\nB = %d.\n", x, y);
    
    // Pass Addresses of x and y using '&'
    // This allows the function to modify x and y in main()
    swap(&x, &y);
    
    printf("After\nA = %d\nB = %d.\n", x, y);
    return 0;
}