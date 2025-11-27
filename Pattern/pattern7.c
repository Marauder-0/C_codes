/* C program to print following pattern 7
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *     */
#include<stdio.h>
int main()
{
int i,j,k,row;
row=5;

// Upper half
for(i = 1; i <= row; ++i)
  {
  for(j = i; j < row; ++j)
     {
        printf(" ");
     }
     for(k = 1; k <= i; ++k)
     {
        printf("*");
     }
      printf("\n");
   }

// Lower half
for(i = row - 1; i >= 1; --i)
  {
  for(j = row; j > i; --j)
     {
        printf(" ");
     }
     for(k = 1; k <= i; ++k)
     {
         printf("*");
     }
      printf("\n");
  }

return 0;
}

