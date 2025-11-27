// c program to calculate and print roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main(void)
{
int a,b,c,r1,r2;
double D;
printf("Enter values of a ,b, c\n"); // a(x^2) + bx + c = 0
scanf("%d%d%d", &a,&b,&c);
D = (b*b)-4*a*c;
if(D>0)
{
 r1 = (-b + sqrt(D))/(2*a);
 r2 = (-b - sqrt(D))/(2*a);
 printf("Roots for this Quadratic Equation are Real and Distinct\n");
 printf("Root 1 = %d\nRoot 2 = %d\n",r1,r2);
}
else if(D==0)
{
 r1 = r2 = -b/(2*a);
 printf("Roots for this Quadratic Equation are Real and Equal\n");
 printf("Root 1 = %d\nRoot 2 = %d\n",r1,r2);
}
else if(D<0)
{
 printf("Roots for this Quadratic Equation are Imaginery\n");
}
return 0;
}
