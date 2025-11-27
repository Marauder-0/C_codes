//natural sum using recur
#include<stdio.h>
int sum(int n)
{
    if(n<=0)
    {
        return 0;
    }
    return (n + sum(n-1));
}
int main()
{
    int i;
    printf("Enter Nth value: ");
    scanf("%d",&i);
    int r = sum(i);
    printf("Sum is %d\n",r);
    return 0;
}