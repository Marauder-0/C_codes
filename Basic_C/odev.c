// c program to find sum of even number and odd number from 1 to 20
#include<stdio.h>
int main(void)
{
int i,oddsum=0,evensum=0;
for(i = 1; i<=20; ++i)
{
 if(i%2==0)
 {
  evensum = evensum + i;
 }
 else
 {
  oddsum = oddsum + i;
 }
}
printf("Evensum is %d and Oddsum is %d\n", evensum,oddsum);
return 0;
}

