//wap to print pascal triangle
#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
    if(a>0){
        for(i=1;i<=a;++i){
            fact = fact*i;
        }
    }
    return fact;
}
int comb(int x,int y)
{
    int i = factorial(x)/(factorial(y)*(factorial(x-y)));
    return i;
}
int main()
{
    int n;
    printf("Enter value for N: ");
    scanf("%d",&n);

    for(int i=0;i<=n;++i)
    {
        for(int k=0;k<=(n-i);++k)
        {
            printf(" ");
        }
        for(int j=0;j<=i;++j)
        {
            int icj = comb(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}
