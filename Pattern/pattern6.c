/* C program for pattern 6
*
**
***
****
*****
****
***
**
*      */
#include<stdio.h>
int main()
{
int i,j,row;
for(i=1;i<=5;++i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
row=5;
for(i=(row-1);i>=1;--i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
return 0;
}

