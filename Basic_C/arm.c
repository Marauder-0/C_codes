//C program to check whether input is armstrong or not
#include<stdio.h>
int main()
{
    int num,a,b,c,sum,temp;
    printf("enter any value\n");
    scanf("%d",&num);
    temp = num;
    a = num%10;
    num = num/10;
    b = num%10;
    num = num/10;
    c = num%10;
    num = num%10;
    sum = (a*a*a) + (b*b*b) + (c*c*c);
    if(sum == temp)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("not armstrong\n");
    }
    return 0;
}