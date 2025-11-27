//To implement print first N-Fibonacci numbers (ex- 0 1 1 2 3 5 8 13 ………).
#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    printf("Enter limit for Series: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d, %d, ",a,b);
    for(i=2;i<n;++i)
    {
        c = a + b;
        printf("%d, ",c);
        a = b;
        b = c;
    }
    return 0;
}
