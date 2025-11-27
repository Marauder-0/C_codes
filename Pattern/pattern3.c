/* C program for pattern 3
    *
   **
  ***
 ****
*****        */
#include<stdio.h>
int main()
{
int i,k,j;
for(i=1;i<=5;++i)
{
for(j=1;j<=(5-i);++j)
{
printf(" ");
}
for(k=1;k<=i;++k)
{
printf("*");
}
printf("\n");
}
return 0;
}

