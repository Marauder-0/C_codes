// C program to implement SI 
#include<stdio.h>
int main(void)
{
float P,R,SI,T;
printf("Enter The Principle Amount\n");
scanf("%f", &P);
printf("Enter The Rate of Interest(IN YEAR)\n");
scanf("%f", &R);
printf("Enter The Time Period of Interest\n");
scanf("%f", &T);
SI = (P*R*T)/100;
printf("Final Simple Interest is %f\n", SI);
return 0;
}

