#include<stdio.h>
//FunctioN Declare/Prototype
void si(float* si,float P, float R, float T)
{
    *si = (P*R*T)/100;
}
int main()
{
    float prin,rate,time,SI;
    printf("Enter Principle Amount: ");
    scanf("%f",&prin);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time period: ");
    scanf("%f",&time);
    //Function Call
    si(&SI,prin,rate,time);
    //Print output
    printf("Simple Interest is %.3f\n",SI);
    return 0;
}