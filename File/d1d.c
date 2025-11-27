// C program to calculate perimeter and radiius of a positive radius
#include<stdio.h>
#define PI 3.14
int main(void)
{
float R,P,A;
printf("Enter a positive Radius\n");
scanf("%f", &R);
if(R>0)
{
 P =  2*PI*R;
 A =  PI*(R*R);
 printf("Perimeter is %f\n", P);
 printf("Area is %f\n", A);
}
else
{
 printf("Invalid Radius\n");
}
return 0;
}

