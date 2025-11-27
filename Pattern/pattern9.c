/* C program for this pattern 9


*****
 ****
  ***
   **
    *
   **
  ***
 ****
*****       */
#include <stdio.h>

int main() 
{
    int row, i, j;
    printf("Enter value of row\n");
    scanf("%d", &row);

    // Upper part including center line
    for (i = 0; i < row; i++) 
    {
        // Print leading spaces
        for (j = 0; j < i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < row - i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for (i = row - 2; i >= 0; i--) 
    {
        // Print leading spaces
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < row - i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}