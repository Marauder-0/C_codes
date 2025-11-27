// C program to find a^b
#include<stdio.h>
int main(void)
{
int store=1,a,b,i;
printf("Enter values of a and b\n");
scanf("%d%d", &a,&b);
for(i = 1; i <= b; ++i)
{
 store = store*a;
}
printf("The value of a^b is %d\n", store);
return 0;
}

