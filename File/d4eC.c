/*C program for following pattern
ABCDE
ABCD
ABC
AB
A         */
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    // Outer loop: Starts at 5, decreases to 1 (controls row count)
    for(i=5;i>=1;--i)
    {
        ch = 'A'; // Reset character to 'A' for start of every row

        // Inner loop: runs 'i' times (5 times, then 4, etc.)
        for(j=1;j<=i;++j)
        {
            printf("%c",ch++); // Print char and increment (A -> B)
        }
        printf("\n"); // Move to next line
    }
    return 0;
}