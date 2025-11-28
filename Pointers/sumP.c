#include<stdio.h>
int main()
{
    int n[10],sum=0;
    int*ptr;
    ptr = n;
    printf("enter 10 integers: ");
    for(int i=0;i<10;++i)
    {
        scanf("%d",(ptr+i));
        sum = sum + *(ptr+i);
    }
    printf("Sum of all Array Values is %d\n",sum);
    return 0;
}