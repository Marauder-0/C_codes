#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter Nth value: ");
    scanf("%d",&n);
    printf("Prime Number: 1\t ");
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            if(i%j == 0)
            {
                ++count;
            }
        }
        if(count == 2)
        {
            printf("%d\t",i);
        }
        count = 0;
    }
    return 0;
}