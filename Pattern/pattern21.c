/* C program for following pattern
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * *  
  * * *  
   * * 
    *           */
#include<stdio.h>
int main()
{
    int i, j, k;
    int n = 5; // number of rows for the pyramid

    // Upper half of the pyramid
    for(i = 1; i <= n; i++)
    {
        // printing spaces
        for(k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // printing stars
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the pyramid
    for(i = n - 1; i >= 1; i--)
    {
        // printing spaces
        for(k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        // printing stars
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
