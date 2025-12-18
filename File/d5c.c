//C program to Implement Sum of digit using do-while loop
#include<stdio.h>
int main()
{
    int num,sum,remainder;
    printf("Enter Test Value: ");
    scanf("%d",&num);
    //Do-while Logic
    sum = 0;
    do
    {
        remainder =  num%10;
        sum = sum + remainder;
        num = num/10;
    }
    while(num>0);
    printf("Digit sum is %d\n",sum);
    return 0;
}