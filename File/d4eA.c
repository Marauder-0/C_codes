/* C program for pattern 
    *
   ***
  *****
 ******* 
********* */
#include<stdio.h>
int main()
{
    int i,j,k;
    // Outer loop for rows (Run 5 times)
    for(i=1;i<=5;++i)
    {
        // Loop 1: Print spaces (Decreases: 4, 3, 2...)
        for(j=1;j<=(5-i);++j)
        {
            printf(" ");
        }

        // Loop 2: Print stars (Odd numbers: 1, 3, 5...)
        for(k=1;k<=(2*i-1);++k)
        {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }
    return 0;
}