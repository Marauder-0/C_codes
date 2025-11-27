/* C program for pattern 5
  *
 **
***     */
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=3;++i)
{
for(j=1;j<=3;++j)
{
if((i==1 && j==1) || (i==1 && j==2) || (i==2 && j==1))
{
 printf(" ");
}
else
{
 printf("*");
}
}
printf("\n");
}
return 0;
}

