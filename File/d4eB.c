/*C program to print follwing pattern
1
12
123
1234
12345  */
#include<stdio.h>
int main()
{
    int i,j;
    // Outer loop for rows (Runs 5 times)
    for(i=1;i<=5;++i)
    {
        // Inner loop prints numbers (1 up to current row i)
        for(j=1;j<=i;++j)
        {
            printf("%d",j);
        }
        printf("\n"); // Move to next line after printing row
    }
    return 0;
}