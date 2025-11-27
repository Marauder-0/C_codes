#include<stdio.h>
#define pi 3.142
void areaper(float rad)
{
    float area = pi*rad*rad;
    float perimeter = 2*pi*rad;
    printf("Area = %.3f\nPerimeter = %.3f\n",area,perimeter);
}
int main()
{
    float r;
    printf("Enter Radius: ");
    scanf("%f",&r);
    areaper(r);
    return 0;
}