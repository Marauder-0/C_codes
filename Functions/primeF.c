#include<stdio.h>
#include<stdbool.h>
bool prime(int n)
{
    int count=0;
    int i;
    for(i=1;i<=n;++i)
    {
        if(n%i == 0)
        {
            ++count;
        }
    }
    if(count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main()
{
    int n;
    printf("Enter test integer: ");
    scanf("%d",&n);

    if(prime(n))
    {
        printf("PRIME\n");
    }
    else
    {
        printf("NOT PRIME\n");
    }
}