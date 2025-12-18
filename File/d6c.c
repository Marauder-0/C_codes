//C program to implement all palindrome from 1 to N
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int start,end,rem,rev,temp;
    printf("Enter Starting point: ");
    scanf("%d",&start);
    printf("Enter Ending Point: ");
    scanf("%d",&end);
    printf("Palindrome From %d to %d is -> ",start,end);
    // Iterate through the user-defined range
    for(int i = start; i <= end; ++i)
    {
        temp = i;   // Create a copy: We need to destroy 'temp' to reverse it, but keep 'i' for comparison
        rev = 0;    // Reset: Must clear 'rev' for every new number in the loop
        
        // Logic to Reverse the Number
        while(temp > 0)
        {
            rem = temp % 10;
            rev = (rev * 10) + rem; // Shift existing digits to left, add new digit
            temp = temp / 10;
        }
        
        // Compare reversed version with the original number 'i'
        if(rev == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}