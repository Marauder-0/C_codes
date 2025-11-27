#include<stdio.h>
int recur(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n*recur(n-1);
}
int main()
{
    int i,r;
    printf("Enter Number for factorial: ");
    scanf("%d",&i);

    r = recur(i);
    printf("Factorial is: %d\n",r);
    return 0;
}